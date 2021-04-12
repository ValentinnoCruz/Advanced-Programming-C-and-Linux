
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
    cout << "How many Feet is it?" << endl;
    
    
    // User inputs feet
    cin >> mEtr;
    
    // Converstion from meters to feet 
    feet = mEtr / 3.28084;
    
    
    // Output the converted result.
    cout << "Thats " << feet << " Meters long" << endl;
   
    
    
    return 0;
}

