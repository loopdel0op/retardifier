//retardifier functions source file

#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
#include "variables.h"


using namespace std;

string result;
bool isHelpCalled;

void help(){
	
		//usage example
	cout << "Usage:" << endl;
	cout << "  retardifier [options] <sentence>" << endl << endl;

	//Options list
	cout << "Options:" << endl;
	cout << "  <sentence>   sentence you want to retardify" << endl;
	cout << "  -f   	   start from the first letter" << endl;
	cout << "  -s   	   start from the second letter" << endl;
	cout << "  -h   	   show this menu" << endl;
	
}



void helpCalled(){


	if (isHelpCalled == true) help();
}



void initialize(int argCount, char **argCharArray){
	int argCountGlobal = argCount;

	vector<string> argVector(argCountGlobal);

	for (int i = 0; i != argCount; ++i)
	{
		argVector[i] = argCharArray[i];
	}
				// Check if the user needs help
	if (argVector[1] == "-h") isHelpCalled = true;
	if (argVector[1] != "-h" && argVector[1] != "-f" && argVector[1] != "-s") isHelpCalled = true;


				// Starts form the second letter to retardify
	if (argVector[1] == "-s"){
	for (int i = 0; i != argCount; ++i)
	{
		int j = 0;

		for (auto iter = argVector[i].begin(); iter != argVector[i].end() && !isspace(*iter); ++iter)
		{
			++j;


			if (j % 2 == 0)
			*iter = toupper(*iter);
		}
	}
	for (int i = 2; i != argCount; ++i)
	{
		result += argVector[i];
		result += " ";
	}
}

	// Starts from the first letter to retardify
	if (argVector[1] == "-f"){
	for (int i = 0; i != argCount; ++i)
	{
		int j = 0;

		for (auto iter = argVector[i].begin() - 1; iter != argVector[i].end() && !isspace(*iter); ++iter)
		{
			++j;


			if (j % 2 == 0)
			*iter = toupper(*iter);
		}
	}
	for (int i = 2; i != argCount; ++i)
	{
		result += argVector[i];
		result += " ";
	}
}
	
}

void printSentence(){
	cout << result << endl;
}
