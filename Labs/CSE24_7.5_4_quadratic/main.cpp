/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 7.5 Part 4 Quadratic
 * Created on February 13, 2021, 8:53 PM
 */


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

    float  a, real,  //declare  variables 
           b,imagin,
           c,disc,
           x_1,x_2;
    
    cin >> a >> b >> c; // ask user for input
    disc = b*b - 4*a*c; // set disc to inside of square root.
   
    // conditions for the outcome if positive 
    if ( disc > 0) {
        x_1 = (-b + sqrt(disc)) / (2*a);        // positive sqrt disc
        x_2 = (-b - sqrt(disc)) / (2*a);       // negative sqrt disc
        cout << " The roots are real" << endl;
        cout << "x1 = " << x_1 << endl;
        cout << "x2 = " << x_2 << endl;
        }
    // conditions for outcome if equal to 0
    else if (disc == 0){
        cout << " The roots are real " << endl;
        x_1 = -b/(2*a);
        cout << "x1 = x2 = " << x_1 << endl; 
    }
    // conditions for outcome if negative
    else {
        real = -b/(2*a);
        imagin = sqrt(-disc)/(2*a);
        cout << " The roots are not real" << endl; 
        cout << "x1 = " << ceil(real) << " and x2 = " << ceil(imagin)  << endl;
        cout << "x1  = "<< ceil(real) <<  " and x2 = "<< ceil(imagin) << endl;
        }
    
    return 0;
}

