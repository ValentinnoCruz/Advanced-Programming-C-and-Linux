
/* 
 * File:   main.cpp
 * Author: valentinno Cruz
 * CSE_24 - 5.7 Part 4
 * Created on February 2, 2021, 8:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int faren,   // Variable assigned to fahrenheit
        cEls;    // Variable assigned to Celsius
    
   
    // ask the user how many Degrees Fahrenheit they desire to convert
    cout << "How many Degrees Fahrenheit is it?" << endl;
    
    
    // User inputs Fahrenheit degrees
    cin >> faren;
    
    // Conversion from Celsius to Fahrenheit 
    cEls = ((faren*5.0)-(5.0*32))/9;
    
    
    // Output the converted result.
    cout << "Thats " << cEls << " Degrees Celsius" << endl;
   
    
    
    return 0;
}

