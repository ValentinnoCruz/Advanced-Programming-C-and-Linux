
/* 
 * File:   main.cpp
 * Author: valentinno Cruz
 * CSE_24 - 5.7 Part 2
 * Created on February 2, 2021, 7:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int feet,   // Variable assigned to feet
        mEtr;    // Variable assigned to meter
    
   
    // ask the user how many feet they desire to convert
    cout << "How many Meters is it?" << endl;
    
    
    // User inputs feet
    cin >> feet;
    
    // Converstion from meters to feet 
    mEtr = feet * 0.3048;
    
    
    // Output the converted result.
    cout << "Thats " << mEtr << " Meters long" << endl;
   
    
    
    return 0;
}

