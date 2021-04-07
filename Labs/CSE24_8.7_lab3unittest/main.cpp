//#ifndef STRINGREGROUP_H
//#define STRINGREGROUP_H
#include "all.h"
#include<iostream>
#include <cctype>
#include <string>
using namespace std;


std::string regroup(std::string input) {

	//moves nums to the right and letters left
	string output = "";

	for (int i = 0; i < input.length(); i++) {

		// go through string index
		if (isalpha(input[i])) {

			//if char is letter, print
			output = output + input[i];
		}

	}

	for (int i = 0; i < input.length(); i++) {

		// go through string index
		if (!isalpha(input[i])) {

			//if not char or num, append
			output = output + input[i];
		}

	}
	return output;
}

//#endif /* STRINGREGROUP_H */

TEST(TestCaseName, TestName) {
	
	string output = regroup("H2SO4");	
	// the output should be "HSO24"	
	ASSERT_EQ(output, "HSO24");

	output = regroup("COVID19");
	// the output should be "COVID19"	
	ASSERT_EQ(output, "COVID19");

	output = regroup("A121B989C");
	// the output should be "ABC121989"	
	ASSERT_EQ(output, "ABC121989");

}
