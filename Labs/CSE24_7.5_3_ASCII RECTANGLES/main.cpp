/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 7.5 Part 3 ASCII REC
 * Created on February 13, 2021, 8:53 PM
 */

#include <string>
#include <iostream>
#include <cassert>

using namespace std;
void displayRec( int x, int y){
    assert( y >= 1);    // The ht must be a positive integer
    assert( x >= 1);    // The width must b
    
    
    // Draw 1st row of *'s in the x direction
    cout << string(x, '*') << endl;
    
    // Draw *'s in the y direction
    for ( int j = 0; j < y - 2; ++j)
        cout << '*' << string(x - 2, ' ' ) << '*' << endl;
    
    // Draw 2nd row of *'s in the x direction
    cout << string(x, '*' )<< endl;
}



int main(int argc, char** argv) {

    int x, y;
    
    cin >> x >> y;
    displayRec(x ,y);
    
    return 0;
}

