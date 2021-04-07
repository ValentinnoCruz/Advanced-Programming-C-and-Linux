/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 8.7 Part 1 string regrouping
 * Created on February 25, 2021, 8:53 PM
 */


#include <iostream>
#include "stringregroup.h"

using namespace std;


int main(int argc, char** argv) {
// run a test of the Function
   string test = "H2SO4";                         //set value
   cout << "INPUT = " << test << ", Output = " 
                      << regroup(test) << endl; //print
   test = "COVID19"; //
   cout << "INPUT = " << test << ", Output = "   
                      << regroup(test) << endl; //print
   test = "A121B989C";
   cout << "INPUT = " << test << ", Output = "   
                      << regroup(test) << endl; //print
   test = "005005";
   cout << "INPUT = " << test << ", Output = "   
                      << regroup(test) << endl; //print
   test = "ABCABC";
   cout << "INPUT = " << test << ", Output = "   
                      << regroup(test) << endl; //print
   test = "123abc";
   cout << "INPUT = " << test << ", Output = "   
                      << regroup(test) << endl; //print
   test = "abc123";
   cout << "INPUT = " << test << ", Output = "   
                      << regroup(test) << endl; //print
   
   return 0;
}


