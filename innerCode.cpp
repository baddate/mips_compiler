#include "innerCode.h"
#include "codeOptimize.h"
#include "tools.h"
#include "IntoMips.h"
#include <fstream>

InnerCode::InnerCode() {

}

void InnerCode::addCode(string str) {
	codeList.push_back(str);
}

void InnerCode::printCode() {
	cout<<"O0000"<<endl;
	Optimize optimize(codeList);
	cout<<"O0"<<endl;
	codeList = optimize.getCodeList();
	ofstream out("innerCode.txt");

	cout << "\n===============INNERCODE===============" << endl;
	for (string s : codeList) {
		cout << s << endl;
		out << s << "\n";
	}
	// printf("%s\n", "+++++++++++++tomips++++++++");
	// IntoMips test = IntoMips("innerCode.txt");
}

string InnerCode::createCodeforVar(string tempname, string op, varNode node1, varNode node2) {
	string result = tempname + " := ";
	if (node1.useAddress) {
		cout<<"test$"<<endl;
		result += "*" + node1.name;
	}
	else {
		if (node1.num < 0) {
			result += node1.name;
		}
		else result += "var" + inttostr(node1.num);
	}
	
	result += " " + op + " ";

	if (node2.useAddress) {
		result += "*" + node2.name;
	}
	else {
		if (node2.num < 0) {
			result += node2.name;
		}
		else result += "var" + inttostr(node2.num);
	}

	return result;

}

string InnerCode::createCodeforAssign(varNode node1, varNode node2) {
	string result;
	if (node1.useAddress) {
		cout<<"test$1"<<endl;
		// regex pattern("0[xX][0-9a-fA-F]+",regex::icase);

		// if(!regex_match(node1.name, pattern)) {
		// 	result = "*" + node1.name + " := ";
		// }
		// else
			result = "*" + node1.name + " := ";
	}
	else {
		result = "var" + inttostr(node1.num);
		result += " := ";
	}

	if (node2.useAddress) {
		result += "*" + node2.name;
	}
	else {
		if (node2.num < 0) {
			result += node2.name;
		}
		else result += "var" + inttostr(node2.num);
	}
	

	return result;
}

string InnerCode::createCodeforParameter(varNode node) {
	string result = "PARAM ";
	result += "var" + inttostr(node.num);
	return result;
}

string InnerCode::createCodeforReturn(varNode node) {
	string result = "RETURN ";
	if (node.useAddress) {
		result += "*" + node.name;
	}
	else {
		if (node.num < 0) {
			result += node.name;
		}
		else result += "var" + inttostr(node.num);
	}
	
	return result;
}

string InnerCode::createCodeforArgument(varNode node) {
	string result = "ARG ";
	if (node.useAddress) {
		result += "*" + node.name;
	} 
	else {
		if (node.num < 0) {
			result += node.name;
		}
		else result += "var" + inttostr(node.num);
	}
	
	return result;
}

string InnerCode::getNodeName(varNode node) {
	if (node.useAddress) {
		return "*" + node.name;
	}
	else {
		if (node.num < 0) {
			return node.name;
		}
		else return ("var" + inttostr(node.num));
	}

}

string InnerCode::getarrayNodeName(arrayNode node) {
	return ("array" + inttostr(node.num));
}

string InnerCode::getLabelName() {
	return "label" + inttostr(labelNum++);
}