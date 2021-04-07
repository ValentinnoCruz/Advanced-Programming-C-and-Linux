/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 8.7 Part 3 Invert String
 * Created on February 26, 2021, 07:06 AM
 */

#include <string>
#include <iostream>
#include "invert.h"

using namespace std;



int main(){
    string str;
    getline(cin,str);
    cout << transform_case(str);
    return 0;
}

