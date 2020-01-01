#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>
#include <time.h>
#include "tools.h"
using namespace std;

class IntoMips
{
public:
	IntoMips(string);

	vector<string> split(const string &str, const string &pattern);
	string getReg(string str);
	void getGlobalVar(string srcfile);
	bool findGlobal(string str);
	void translate(string filename);
};