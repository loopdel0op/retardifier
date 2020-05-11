//retardifier 11.5.2020

#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include "variables.h"

using namespace std;


int main(int argc, char **argv){

	initialize(argc, argv);
	printSentence();
	helpCalled();
}


// make argv[2-argc] a string or whatever IMPORTANT

//Also make secondLetter and firstLetter use the string you made in makeSentence