
/* 
 * File:   GPS.cpp
 * Author: valentinno Cruz
 * CSE_24 - 6.6 Part 5
 * Created on February 8, 2021, 7:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

/*
 * 
 */
int main() {

    int x1, y1, // declare int variables for all coordinates
        x2, y2,
        x3, y3,
        x4, y4; 
    
    // destination values for coordinated points.
    x1 = 1;
    y1 = 1;
    x2 = 5;
    y2 = 5;
    x3 = 8;
    y3 = 2; 
    
    // move line segments to the origin.
    float a_x = x1 - x1,
          a_y = y1 - y1, 
            
          b_x = x2 - x1,
          b_y = y2 - y1,
            
          c_x = x3 - x2,
          c_y = y3 - y2,
            
          p1p2 = ((b_x)*(a_y))- ((a_x)*(b_y)), 
          p2p3 = ((c_x)*(b_y)-(b_x)*(c_y));
    
    // variables assigned to the new points 
    int crx,
        p2_x = 4,
        p2_y = 4,
        p3_x = 3,
        p3_y = -3;
            
    crx =  ((p2_x)*(p3_y))-((p3_x)*(p2_y));
   
    // conditions determining if a turn was made or not.
    if (crx < 0){
        cout << " The car made a LEFT turn" << endl;
        if (crx == 0){
        cout << "The car went STRAIGHT"<< endl;
        }
        if(crx >0 ){
            cout << " The car made a RIGHT turn" << endl;
        }
    }

   
    return 0; // exit stage left
}

