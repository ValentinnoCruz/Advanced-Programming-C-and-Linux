#include <igloo/igloo.h>
#include "lab3.h"
#include <iostream>
#include <cctype>
#include <string>

using namespace igloo;






//===============                ===============
//===============     Test 1     ===============
//===============                ===============

TEST(TestCaseName, Test1) {

	std::string output = regroup("H2SO4");
	// the output should be "HSO24"	
	ASSERT_EQ(output, "HSO24");

	output = regroup("COVID19");
	// the output should be "COVID19"	
	ASSERT_EQ(output, "COVID19");

	output = regroup("A121B989C");
	// the output should be "ABC121989"	
	ASSERT_EQ(output, "ABC121989");
}

//===============                ===============
//===============     Test 2     ===============
//===============                ===============

TEST(TestCaseName, Test2) {

	int output = count_upper("H2SO4");
	// output should be 3
	ASSERT_EQ(output, 3);

	output = count_upper("Hello World");
	// output should be 2
	ASSERT_EQ(output, 2);
}


//===============                ===============
//===============     Test 3     ===============
//===============                ===============

TEST(TestCaseName, Test3) {

	std::string output = transform_case("This is a line");
	// output should be "tHIS IS a LINe" 
	ASSERT_EQ(output, "tHIS IS a LINe");

	output = transform_case("ThIs iS aNother LIne");
	// output should be "tHiS Is anOTHeR liNe" 
	ASSERT_EQ(output, "tHiS Is anOTHeR liNe");
}

//===============                ===============
//===============     Test 4     ===============
//===============                ===============

TEST(TestCaseName, Test4) {
	std::string a = "ABCD";
	std::string b = "BCDA";
	// It should be TRUE
	ASSERT_TRUE(rotation_distance(a, b) > -1);

	a = "ABCD";
	b = "BCAD";
	// It should be TRUE
	ASSERT_TRUE(rotation_distance(a, b) == -1);
}

//===============                ===============
//===============     Test 5     ===============
//===============                ===============

TEST(TestCaseName, Test5) {

	std::string output = compress("AAACTGG");
	// output should be "A3CTG2"
	ASSERT_EQ(output, "A3CTG2");

	output = compress("AABCCDEEFFFFG");
	// output should be "A2BC2DE2F4G"
	ASSERT_EQ(output, "A2BC2DE2F4G");

	output = compress("HELLO");
	// output should be "HEL2O"
	ASSERT_EQ(output, "HEL2O");
}


//===============                ===============
//===============     Test 6     ===============
//===============                ===============

TEST(TestCaseName, Test6) {

	// It should be true for "AAAOTGG"
	ASSERT_TRUE(symmetric("AAAOTGG"));

	// It should be false for "GREAT"
	ASSERT_FALSE(symmetric("GREAT"));

	// It should be true for "AS9PJL"
	ASSERT_TRUE(symmetric("AS9PJL"));

	// It should be false for "MP4STB"
	ASSERT_FALSE(symmetric("MP4STB"));
}
