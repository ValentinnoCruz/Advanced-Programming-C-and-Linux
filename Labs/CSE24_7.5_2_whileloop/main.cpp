/* 
 * File:   CSE24_7.5_2.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 7.5 Part 2
 * Created on February 13, 2021, 4:46 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    int x; // declare variable for x

    
    
      // while the users input for x is an 'int' the output remains true.
     // \eof is met when anything but an int is input by the user
    while (cin >> x){
        for (int i =1; i <= 12; ++i){
            cout << x << "*" << i << "=" << x*i << endl;
        }
    }
 
    return 0;
}

