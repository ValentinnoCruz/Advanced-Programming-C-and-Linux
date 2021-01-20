
/* 
 * File:   main.cpp
 * Author: valentinno Cruz
 * CSE_24 - 5.7 Part 3
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
    
   
    // ask the user how many Degrees Celcius they desire to convert
    cout << "How many Degrees Celcius is it?" << endl;
    
    
    // User inputs Celcius degrees
    cin >> cEls;
    
    // Conversion from Celsius to fahrenheit 
    faren = (cEls * 9) / 5.0 + 32;
    
    
    // Output the converted result.
    cout << "Thats " << faren << " Degrees Fahrenheit" << endl;
   
    
    
    return 0;
}

