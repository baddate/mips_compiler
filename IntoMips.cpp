#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>
#include <time.h>
#include "tools.h"
using namespace std;

/* 全局函数 */

// int CtoMips(string filename);
// string loadFunc(string filename, string key);

// int loadVarReg(string filename, map<string, string> variables);

// bool judgeKeyword(string file, int num, int count, string keyword);
// string getReg();

/* 全局变量 */
string Reg[17] = ["$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7", "$t8", "$t9", 
	"$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7"];
// string sReg[8] = ["$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7"];
string aReg[4] = ["$a0", "$a1", "$a2", "$a3"];
// string vReg[2] = ["$v0", "$v1"];

// map<string,string> params; //funcname param
// map<string, string> variables; // var reg
// map<string, string> mem; // name offset
// map<string, string> tempvalue; // tempi value
regex regtemp("temp\\d+",regex::icase);
regex regvar("var\\d+",regex::icase);
regex regnum("#\\d+",regex::icase);

vector<string> tokenVal;
vector<string> tempVal;
int reg_ok[18] = {0}; //
map<string, string> regTable; //变量名&寄存器名




vector<string> split(const string &str, const string &pattern)
{
    vector<string> res;
    if(str == "")
        return res;
    //在字符串末尾也加入分隔符，方便截取最后一段
    string strs = str + pattern;
    size_t pos = strs.find(pattern);

    while(pos != strs.npos)
    {
        string temp = strs.substr(0, pos);
        res.push_back(temp);
        //去掉已分割的字符串,在剩下的字符串中进行分割
        strs = strs.substr(pos+1, strs.size());
        pos = strs.find(pattern);
    }

    return res;
}

bool loadToken(string srcfile) {
	string data;
	ifstream infile; 
	infile.open(srcfile);
	infile >> data;
	while(data) {
		tokenVal.push_back(data);
	}
	return true;
}

string loadVarReg(vector<string> vari) {
	for(int i=0;i<vari.size();i++) {
		if(regex_match(vari[i], regtemp)) {
			tempVal.push_back(vari[i]);
		}
	}
}

string getReg(string str) {
	tempVal.pop_back(str);
	if(regTable.find(str) != regTable.end()) {
		return regTable.find(str)->second;
	}
	else {
		if(regex_match(str,regtemp) && count(tempVal.begin(),tempVal.end(), str) == 0) {
			reg_ok[str.substr(1, str.size())] = 0;
			iterator iter = regTable.find(str);
			iter.remove();
		} 
		for(int i=0;i<17;i++) {
			if(!reg_ok[i]) {
				regTable.insert({str, Reg[i]});
				reg_ok[i]=1;
				return Reg[i];
			}
		}
		// 分配内存

	}
}

string translate(vector<string> token string filename) {
	string data;
	ifstream infile; 
	infile.open(filename);
	ofstream outfile;
	outfile.open("mips.asm");
	vector<string> line;
	if(infile) {
		while(getline(infile, data)) {
			srand((unsigned)time(NULL));
			string offset = inttostr(rand()+1);
			line = split(data, " ");
			if(line[0] == "LABEL" || line[0] == "FUNCTION") {
				outfile << line[1] << ":\n";
			}
			else if(line[1] == ":=") {
				if(line.size() == 3) {
					if(regex_match(line[2], regnum)) { // #
						outfile << "\taddi " << getReg(line[0]) << ", $Zero, " << line[2].substr(1,line[2].size()) << "\n";
					}
					else {
						int num = strtoint(substr(3,line[0].size()));
						outfile << "\tsw " << getReg(line[2]) << ", " << offset << "($Zero)\n";
						outfile << "\tlw " << aReg[num] << ", " << offset << "($Zero)\n";
					}
				}
				else if(line.size() == 5) {
					if(line[3] == "+") {
						outfile << "\tadd " << getReg(line[2]) << ", " << getReg(line[4]) << ", " <<getReg(line[0]) << "\n";
					}
					else if(line[3] == "-") {
						outfile << "\tsub " << getReg(line[2]) << ", " << getReg(line[4]) << ", " <<getReg(line[0]) << "\n";
					}
					else if(line[3] == "*") {
						outfile << "\tmult " << getReg(line[2]) << ", " << getReg(line[4]) << "\n";
						outfile << "\tmfhi " << getReg(line[0]) << "\n";
						outfile << "\tmflo " << getReg(line[0]) << "\n";
					}
					else if(line[3] == "/") {
						outfile << "\tdiv " << getReg(line[2]) << ", " << getReg(line[4]) << "\n";
						outfile << "\tmfhi " << getReg(line[0]) << "\n";
						outfile << "\tmflo " << getReg(line[0]) << "\n";
					}
					else if(line[3] == "<") {
						outfile << "\tslt " << getReg(line[0]) << ", " << getReg(line[2]) << ", " <<getReg(line[4]) << "\n";
					}
					else if(line[3] == ">") {
						outfile << "\tslt " << getReg(line[0]) << ", " << getReg(line[4]) << ", " <<getReg(line[2]) << "\n";
					}
				}
				else if(line[2] == "CALL") {
					outfile << "\taddi $sp,$sp,-24\n\tsw $t0,0($sp)\n\tsw $ra,4($sp)\n\tsw $t1,8($sp)\n\tsw $t2,12($sp)\n
					\tsw $t3,16($sp)\n\tsw $t4,20($sp)\n\tjal %s\n\tlw $a0,0($sp)\n\tlw $ra,4($sp)\n
					\tlw $t1,8($sp)\n\tlw $t2,12($sp)\n\tlw $t3,16($sp)\n\tlw $t4,20($sp)\n\taddi $sp,$sp,24\n
					\tjal " << line[3] << "\n";
				}

			}
			else if(line[0] == "PARAM") {
				int num = strtoint(substr(3,line[1].size()));
				regTable.insert({line[1], aReg[num]});
			}
			else if(line[0] == "GOTO") {
				outfile << "\tj " << line[1] << "\n";
			}
			else if(line[0] == "DEC") {
				
			}
			else if(line[0] == "ARG") {
				int num = strtoint(substr(3,line[1].size()));

			}
			else if(line[0] == "CALL") {

			}
			else if(line[0] == "RETURN") {
				
			}
			else if(line[0] == "IF") {
				if(line[2] == "==") { //
					outfile << "\tbeq " <<getReg(line[1]) << ", " << getReg(line[3]) << ", " << <<"\n";
				}
				else if (line[2] == "!=")
				{
					outfile << "\tbne " <<getReg(line[1]) << ", " << getReg(line[3]) << ", " << <<"\n";
				}
				else if (line[2] == "<=")
				{
					
				}
				else if (line[2] == ">=")
				{
					
				}
				else if (line[2] == "<")
				{
					
				}
				else if (line[2] == ">")
				{
					outfile << "\tslt " << getReg(line[0]) << ", " << getReg(line[4]) << ", " <<getReg(line[2]) << "\n";
				}
			}
		}
	}
	else {
		cout << "NO SUCH FILE!"<<endl;
	}


	// for(int i=0;i<token.size();i++) {
	// 	if(token[i] == "LABEL") {
	// 		outfile << token[i++] <<":\n";
	// 	}
	// 	else if(token[i] == ":=") {

	// 	}
	// 	else if(token[i] == "FUNCTION") {
	// 		outfile << token[i++] <<":\n";
	// 	}
	// 	else if(token[i] == "PARAM") {
			
	// 	}
	// 	else if(token[i] == "DEC") {
			
	// 	}
	// 	else if(token[i] == "IF") {
			
	// 	}
	// 	else if(token[i] == "GOTO") {
			
	// 	}
	// 	else if(token[i] == "RETURN") {
			
	// 	}
	// 	else if(token[i] == "CALL") {
			
	// 	}
	// }
}


// int CtoMips(string filename) {
// 	string data;
// 	ifstream infile; 
// 	infile.open(filename);
// 	ofstream outfile;
// 	outfile.open("mips.asm");
// 	infile >> data;
// 	while(data) {
// 		if(data == "FUNCTION") {//读 name 和 ：
// 			infile >> data;
// 			outfile << data;
// 			infile >> data;
// 			outfile << data;
// 		}
// 		else if(data == "") {
			
// 		}
// 		else if(data == "") {
			
// 		}
// 	}
	
// }

// string loadFunc(string filename, string funcname) {
// 	int count = 0;
// 	string data;
// 	string dst;
// 	ifstream infile; 
// 	infile.open(srcfile);
// 	infile >> data;
// 	while(data) {
// 		count++;
// 		if(data == funcname) {
// 			dst += data+ ":" + "\n";
// 			infile.seekg( 1, ios::cur );
// 			infile >> data; 

// 			// scan params
// 			while(data == "PARAM") {
// 				infile >> data;
// 				params.insert({funcname,data});
// 			}

// 			// infile >> data;
// 			// scan func body
// 			while(regex_match(data, regtemp)) {
// 				int tmp = data;
// 				infile.seekg( 1, ios::cur );
// 				infile >> data;
// 				if(regex_match(data, regnum)) {
// 					string num = data.substr(1, data.size());
// 					tempvalue.insert({tmp, num});
// 					// if(cnt > 9) {
// 					// 	dst += "addi $s9, "+ "$Zero, " + num + "\n";
// 					// 	dst += "sw $s9, "+ num+inttostr(cnt) +"($Zero)\n";
// 					// 	mem.insert({data, num+inttostr(cnt)});
// 					// }
// 					// else {
// 					// 	dst += "addi "+ tReg[cnt] + ", "+ "$Zero, " + num + "\n";

// 					// }
// 				}
// 				else {
// 					string var,op,temp;
// 					infile >> var >> op >> temp;
// 					iterator iter = tempvalue.find(temp);
// 					// if(iter != mem.end()) {
// 						dst += "lw $s9, "+ iter->second +"($Zero)\n";
// 					// }
// 					// else {

// 					// }
// 					iterator iter1 = mem.find(var);
// 					if(iter1 != mem.end()) {

// 					}
// 					string num = data.substr(3, data.size());
// 					if(op == "+") {
// 						dst += 
// 					} 
// 					else if(op == "-") {

// 					}
// 				}
// 			}
// 			int cnt=0;
// 			while(regex_match(data, regvar)) {
// 				string tmp = data;
// 				infile.seekg( 1, ios::cur );
// 				infile >> data;
// 				iterator iter = tempvalue.find(data);
// 				if(iter != tempvalue.end()) {
// 					if(cnt<8) {
// 						dst += "addi " + sReg[cnt] + ", $Zero" + ", " + iter->second + "\n";
// 					}
// 					else {
// 						dst += "addi $s9, "+ "$Zero, " + iter->second + "\n";
// 						dst += "sw $s9, "+ iter->second+cnt +"($Zero)\n";
// 						mem.insert({tmp, iter->second+cnt});
// 					}
// 				}
// 				cnt++;
// 			}
// 		}
// 		infile >> data;
// 	}
// 	return dst;
// }

// int loadVarReg(string filename, map<string, string> variables) {
// 	string data;
// 	ifstream infile; 
// 	infile.open(file);
// 	infile >> data;
// 	regex pattern("var\\d+",regex::icase);
// 	int cnt = 0;
// 	while(regex_match(data, pattern)) {
// 		if(cnt > 8) {

// 		}
// 		variables.insert({data, sReg[cnt]});
// 		cnt++;
// 	}
// }

// bool judgeKeyword(string file, int num, int count, string keyword) {
// 	string data;
// 	ifstream infile; 
// 	infile.open(file);
// 	infile.seekg( num, ios::cur ); //后移文件读指针
// 	infile >> data;
// 	infile.seekg(count); //恢复文件读指针
// 	if(keyword == data)
// 		return true;
// 	return false;
// }
