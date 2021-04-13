/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 8.7 Rotation
 * Created on February 26, 2021, 2:03 PM
 */

#include <cstdlib>
#include <iostream>
#include "rotation.h"

using namespace std;


    int main(){
    string a = "hello";
    string b = "ohell";
    cout <<"Distance of " 
         << a << " & " << b << ": " 
         << rotation_distance(a, b) << endl;

    a = "ABCD";
    b = "BCAD";
    cout <<"Distance of " 
         << a << " & " << b << ": " 
         << rotation_distance(a, b) << endl;

}

