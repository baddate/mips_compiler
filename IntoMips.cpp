#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>
#include <time.h>
#include <map>
#include "IntoMips.h"
using namespace std;

/* 全局函数 */

// int CtoMips(string filename);
// string loadFunc(string filename, string key);

// int loadVarReg(string filename, map<string, string> variables);

// bool judgeKeyword(string file, int num, int count, string keyword);
// string getReg();

/* 全局变量 */
string tReg[9] = {"$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7", "$t8", "$t9"};
string sReg[8] = {"$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7"};
string aReg[4] = {"$a0", "$a1", "$a2", "$a3"};
// string vReg[2] = ["$v0", "$v1"];

// map<string,string> params; //funcname param
// map<string, string> variables; // var reg
// map<string, string> mem; // name offset
// map<string, string> tempvalue; // tempi value
regex regtemp("temp\\d+",regex::icase);
regex regvar("var\\d+",regex::icase);
regex regnum("#\\d+",regex::icase);
regex regdnum("#-\\d+",regex::icase);
regex regaddr("\\*temp\\d+",regex::icase);
vector<string> tokenVal;
vector<string> tempVal;
vector<string> labelVal;
vector<string> globalVal;

map<string, string> tempNum;
int treg_ok[9] = {0};
int sreg_ok[8] = {0};
int areg_ok[4] = {0};

map<string, string> regTable; //变量名&寄存器名

string returnval;
int argnum=0;
vector<int> underline;

IntoMips::IntoMips(string filename) {
	translate(filename);
}
vector<string> IntoMips::split(const string &str, const string &pattern)
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

// bool loadToken(string srcfile) {
// 	string data;
// 	ifstream infile; 
// 	infile.open(srcfile);
// 	infile >> data;
// 	while(infile.eof()) {
// 		tokenVal.push_back(data);
// 	}
// 	return true;
// }



// string loadVarReg(vector<string> vari) {
// 	for(int i=0;i<vari.size();i++) {
// 		if(regex_match(vari[i], regtemp)) {
// 			tempVal.push_back(vari[i]);
// 		}
// 	}
// }

// void loadLabel(string srcfile) {
// 	string data;
// 	ifstream infile; 
// 	infile.open(srcfile);
// 	infile >> data;
// 	while(infile.eof()) {
// 		if(data == "LABEL") {
// 			infile >> data;
// 			labelVal.push_back(data);
// 		}
// 		infile >> data;
// 	}
// }
// string getLabel(string str) {
// 	int len = labelVal.size();
// 	while(len != 0) {
// 		if(labelVal[len] == str) {
// 			return str;
// 		}
// 	}
// }
string IntoMips::getReg(string str) {
	//tempVal.pop_back(str);
	if(regTable.find(str) != regTable.end()) {
		return regTable.find(str)->second;
	}
	else {
		if(regex_match(str,regtemp)) {
			for(int i=0;i<9;i++) {
				if(!treg_ok[i]) {
					regTable.insert({str, tReg[i]});
					treg_ok[i]=1;
					return tReg[i];
				}
				if(i == 8) { //都分配过了
					for(int j=0;j<9;j++) {
						treg_ok[j] = 0;
					}
					regTable.insert({str, tReg[i]});
					treg_ok[i]=1;
					return tReg[i];
				}
			}
		} 
		else if(regex_match(str,regvar)) {
			for(int i=0;i<8;i++) {
				if(!treg_ok[i]) {
					regTable.insert({str, sReg[i]});
					sreg_ok[i]=1;
					return sReg[i];
				}
				if(i == 7) { //都分配过了
					for(int j=0;j<8;j++) {
						sreg_ok[j] = 0;
					}
					regTable.insert({str, sReg[i]});
					sreg_ok[i]=1;
					return sReg[i];
				}
			}
		}
		else
			return "-1";
	}
}

void IntoMips::getGlobalVar(string srcfile) {
	string data;
	ifstream infile; 
	infile.open(srcfile);
	// ofstream outfile;
	// outfile.open(dstfile);
	infile >> data;
	while(infile.eof() && data != "FUNCTION") {
		if(regex_match(data,regvar)) {
			globalVal.push_back(data);
		}
	}
}
bool IntoMips::findGlobal(string str) {
	for(int i=0;i< globalVal.size();i++) {
		if(str == globalVal[i]) 
			return true;
	}
	return false;
}
void IntoMips::translate(string filename) {
	string data;
	ifstream infile; 
	infile.open(filename);
	ofstream outfile;
	outfile.open("mips.asm");
	cout <<"open it"<<endl;
	vector<string> line;
	getGlobalVar(filename);
	if(infile) {
		cout <<"if "<<endl;
		while(getline(infile, data)) {
			//cout <<"while "<<endl;
			srand((unsigned)time(NULL));
			string offset = inttostr(rand()+1);
			line = split(data, " ");
			// for(int i=0;i<line.size();i++) {
			// 	cout <<"     "<<line[i]<<endl;
			// }
			if(line[0] == "LABEL") {
				outfile << line[1] << ":\n";
			}
			else if(line[0] == "FUNCTION") {
				cout <<"FUNC"<<endl;
				outfile << line[1] << ":\n";
				if(line[1] == "main") {
					for(int i=0;i<9;i++) {
						sreg_ok[i] = 0;
					}
					for(int i=0;i<8;i++) {
						treg_ok[i] = 0;
					}
					outfile << "\tsw $fp,0($sp)\n\tsw $sp, 8($sp)\n\taddi $fp, $sp, 8\n\taddi $sp, $sp, 12\n";
				}
			}
			else if(line[1] == ":=") {
				if(line.size() == 3) {
					if(regex_match(line[2], regnum) || regex_match(line[2], regdnum)) { // #
						cout<<line[0] <<"==============="<<endl;
						
						tempNum.insert({line[0],line[2].substr(1,line[2].size())});
						outfile << "\taddi " << getReg(line[0]) << ", $Zero, " << line[2].substr(1,line[2].size()) << "\n";
						cout << "\taddi " << getReg(line[0]) << ", $Zero, " << line[2].substr(1,line[2].size()) << "\n";

						
					}
					else {
						if(findGlobal(line[0])) {
							outfile << "\tsw " << getReg(line[2]) << ", 0($sp)\n";
							outfile << "\taddi $sp, $sp, 4\n";
						} 
						else if(regex_match(line[0], regaddr)) {
							cout <<"dizhi----------"<<line[2] <<" "<<line[0].substr(1,line[0].size())<<endl;
							map<string,string>::iterator iter = tempNum.begin();
							string temps;
							while(iter!=tempNum.end()) {
								if(iter->first == line[0].substr(1,line[0].size())) {
									temps=iter->second;
								}
								iter++;
							}
							outfile <<"\tsw " << getReg(line[2]) << ", " << temps
							<<"($Zero)\n";
							cout <<"edizhi----------"<<endl;
						}
						else {
							outfile << "\tadd " << getReg(line[0]) << ", $Zero, " << getReg(line[2]) << "\n";
							// outfile << "\tsw " << getReg(line[2]) << ", " << offset << "($Zero)\n";
							// outfile << "\tlw " << getReg(line[0]) << ", " << offset << "($Zero)\n";
						}
						
					}
				}
				else if(line.size() == 5) {
					if(line[3] == "+") {
						cout << "addddddddddddddddddddddddd\n";
						outfile << "\tadd " << getReg(line[0]) << ", " << getReg(line[2]) << ", " <<getReg(line[4]) << "\n";
					}
					else if(line[3] == "-") {
						outfile << "\tsub " << getReg(line[0]) << ", " << getReg(line[2]) << ", " <<getReg(line[4]) << "\n";
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
					else if(line[3] == "<<") {
						// outfile << "\tslt " << getReg(line[0]) << ", " << getReg(line[4]) << ", " <<getReg(line[2]) << "\n";
						outfile << "\tsllv " << getReg(line[0]) << ", " << getReg(line[2]) << ", " <<getReg(line[4]) << "\n";
					}
					else if(line[3] == ">>") {
						cout <<"youyi-----------------" <<endl;
						// outfile << "\tslt " << getReg(line[0]) << ", " << getReg(line[4]) << ", " <<getReg(line[2]) << "\n";
						outfile << "\tsrlv " << getReg(line[0]) << ", " << getReg(line[2]) << ", " <<getReg(line[4]) << "\n";
					}
				}
				else if(line[2] == "CALL") {
					cout <<"CALL-------------------------------\n";
					outfile << "\taddi $sp, $sp, 4\n\tsw $fp,0($sp)\n\tsw $sp, 4($sp)\n";
					for(int i=0;i<8;i++) {
						outfile << "\tsw " << sReg[i] << ", " << inttostr(i*4+8) << "($sp)\n";
					}
					outfile <<"\tjal " << line[3] << "\n";
					
				}

			}
			else if(line[0] == "IF") {
				if(line[2] == "==") { //
					outfile << "\tbeq " << getReg(line[1]) << ", " << getReg(line[3]) << ", " << line[5] <<"\n";
				}
				else if (line[2] == "!=")
				{
					outfile << "\tbne " << getReg(line[1]) << ", " << getReg(line[3]) << ", " << line[5] <<"\n";
				}
				else if (line[2] == "<=") /////可能有问题
				{
					outfile << "\tsub $t0, " << getReg(line[3]) << ", " << getReg(line[1]) <<"\n";
					outfile << "\tbgez $t0, " << line[5] <<"\n";
				}
				else if (line[2] == ">=")
				{
					//outfile << "\tslt " << "" << getReg(line[5]) << ", " << getReg(line[3]) << ", " << getReg(line[1]) <<"\n";
					outfile << "\tsub $t0" << ", " << getReg(line[3]) << ", " <<getReg(line[1]) << "\n";
					outfile << "\tblez $t0, " << line[5] << "\n";
				}
				else if (line[2] == "<")
				{
					outfile << "\tsub $t0" << ", " << getReg(line[3]) << ", " <<getReg(line[1]) << "\n";
					outfile << "\tbgtz $t0, " << line[5] << "\n";
				}
				else if (line[2] == ">")
				{
					cout <<"test if >" <<endl;
					outfile << "\tsub $t0, " << getReg(line[3]) << ", " << getReg(line[1]) <<"\n";
					outfile << "\tbltz $t0, " << line[5] <<"\n";
				}
			}
			else if(line[0] == "PARAM") {
				outfile <<"\taddi $t0, $sp, -4\n\tlw " << aReg[argnum] <<", 0($t0)\n";
				regTable.insert({line[1], aReg[argnum]});
				argnum++;
			}
			else if(line[0] == "GOTO") {
				outfile << "\tj " << line[1] << "\n";
			}
			else if(line[0] == "DEC") {
				
			}
			else if(line[0] == "ARG") {
				outfile << "\taddi $sp, $sp, 4\n"<<"\tsw "<< getReg(line[1]) <<", 0($sp)\n";
			}
			else if(line[0] == "CALL") {
				outfile << "\taddi $sp, $sp, 4\n\tsw $fp,0($sp)\n\tsw $sp, 4($sp)\n";
				for(int i=0;i<8;i++) {
					outfile << "\tsw " << sReg[i] << ", " << inttostr(i*4+8) << "($sp)\n";
				}
				outfile <<"\tjal " << line[1] << "\n";
			}
			else if(line[0] == "RETURN") {
				 returnval = line[1];
				 cout << returnval<<endl;
				 continue;
			}
			else if(line[0] == "END") {
				
				if(line[1] == "main") {
					outfile << "\taddi $t0, $Zero, 8192\n\tjr $t0\n";
				}
				else if(returnval == "void") {
					for(int i=0;i<8;i++) {
						outfile << "\tlw " << sReg[i] << ", " << inttostr(i*4+8) << "($sp)\n";
					}
					outfile << "\tlw $fp, 0($sp)\n\tlw $sp, 4($sp)\n" <<"\tjr $ra\n";
				}
				else {
					for(int i=0;i<8;i++) {
						outfile << "\tlw " << sReg[i] << ", " << inttostr(i*4+8) << "($sp)\n";
					}
					outfile << "\tlw $fp, 0($sp)\n\tlw $sp, 4($sp)\n"<< "\tadd $v0, $Zero, " << getReg(returnval) << "\n\tjr $ra\n";
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

// int main() {
// 	translate("innerCode.txt");
// }