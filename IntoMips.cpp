#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>
using namespace std;

/* 全局函数 */
int CtoMips(string filename);
int loadFunc(string filename, string key);
int loadVar(string filename, vector<string> variables);
bool judgeKeyword(string file, int num, int count, string keyword);
string getReg();

/* 全局变量 */
string tReg[10] = ["$t0", "$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7", "$t8", "$t9"];
string sReg[10] = ["$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7", "$s8", "$s9"];
string aReg[4] = ["$a0", "$a1", "$a2", "$a3"];
string vReg[2] = ["$v0", "$v1"];


int main() {

}

int CtoMips(string filename) {
	string data;
	ifstream infile; 
	infile.open(filename);
	ofstream outfile;
	outfile.open("mips.asm");
	infile >> data;
	while(data) {
		if(data == "FUNCTION") {//读 name 和 ：
			infile >> data;
			outfile << data;
			infile >> data;
			outfile << data;
		}
		else if(data == "") {
			
		}
		else if(data == "") {
			
		}
	}
	
}

int loadFunc(string srcfile, string dstfile, string funcname) {
	int count = 0;
	string data;
	ifstream infile; 
	infile.open(srcfile);
	ofstream outfile;
	outfile.open(dstfile);
	infile >> data;
	while(data) {
		count++;
		if(data == funcname) {
			infile.seekg( 1, ios::cur );

			infile >> data; 
			// scan params
			while(data == "PARAM") {
				infile >> data;

			}

			infile >> data;
			// scan func body
			regex pattern("temp\\d+",regex::icase);
			while(data != "FUNCTION") {
				if(judgeKeyword(filename, 3, count, "FUNCTION")) break;
				if(regex_match(data, pattern)) {// tempi
					infile.seekg( 1, ios::cur );
					infile >> data;
					outfile << "	"

				}

			}
		}
		infile >> data;
	}
	return 
}

int loadVar(string filename, vector<string> variables) {
	string data;
	ifstream infile; 
	infile.open(file);
	infile >> data;
	regex pattern("temp\\d+",regex::icase);
	while(regex_match(data, pattern)) {
		variables.push_back(data);
	}
}

bool judgeKeyword(string file, int num, int count, string keyword) {
	string data;
	ifstream infile; 
	infile.open(file);
	infile.seekg( num, ios::cur ); //后移文件读指针
	infile >> data;
	infile.seekg(count); //恢复文件读指针
	if(keyword == data)
		return true;
	return false;
}