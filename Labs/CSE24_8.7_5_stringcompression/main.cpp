/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 8.7 Compression
 * Created on February 26, 2021, 5:10 PM
 */

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include "strcomp.h"

using namespace std;

int main()
{
   //testing the given functions.
   string test = "runner";   //test string
   cout << "input = " << test 
             << ", \nOutput = " << compress(test)<< endl << endl;   //output
   test = "Mississippi";
   
   cout << "input = " << test 
             << ", \nOutput = " << compress(test)<< endl << endl;
   test = "coffee";
  
   cout << "input = " << test 
             << ", \nOutput = " << compress(test)<< endl << endl;
   return 0;
}
