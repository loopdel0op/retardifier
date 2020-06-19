//retardifier 11.5.2020

#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include "variables.h"

using namespace std;

bool isArgumantCountMoreThanOne;

int main(int argc, char **argv){

	if (argc > 1) isArgumantCountMoreThanOne = true;
	if (isArgumantCountMoreThanOne == false) { help(); return 0;}

	initialize(argc, argv);
	printSentence();
	helpCalled();

	return 0;
}
