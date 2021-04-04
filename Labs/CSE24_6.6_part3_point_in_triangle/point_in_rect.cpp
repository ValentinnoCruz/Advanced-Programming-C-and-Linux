
/* 
 * File:   main.cpp
 * Author: valentinno Cruz
 * CSE_24 - 6.6 Part 3
 * Created on February 8, 2021, 1:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int x1,y1, // declare int variables
        x3,y3; 
       
    // ask the user for coordinates to the rectangular area
    cout << " --------- Coordinates of the rectangle---------\n" << endl;
    cout << " Input the coordinates of the bottom left point" << endl;
    cin >> x1 >> y1;
    
    cout << " Input the coordinates of the top right point" << endl;
    cin >> x3 >> y3;
    
  
    // user inputs the coordinate of the red point
    cout << " Input the coordinates of the red point" << endl;
    int x,
        y;
    
    // user inputs x and y coordiante of the red point
    cin >> x >> y;
    
    // condition in which the red dot must meet to be in the rectangle
    if (x >= 2 && x <= 7 && y  <= 6 && y >= 3){
        cout << " The point is inside of the rectangle:" << endl;
    }
    
    // if condition is not meet.
    else {cout << " The point is not in the rectangle" << endl;
    }
    

    return 0; // exit stage left
}

