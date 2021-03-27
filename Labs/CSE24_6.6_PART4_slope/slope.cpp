
/* 
 * File:   main.cpp
 * Author: valentinno Cruz
 * CSE_24 - 6.6 Part 3
 * Created on February 8, 2021, 1:02 PM
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
      
    
    
    float m1,   // declare variable for angle between segments
          slope,
          m2; 
       
    // ask the user for coordinates points of like segment 1
    cout << " Input the coordinates of point 1" << endl;
    cin >> x1 >> y1;
    
    cout << " Input the coordinates of point 2" << endl;
    cin >> x2 >> y2;
    
    
    // ask the user for coordinates points of like segment 2
    cout << " Input the coordinates of point 3" << endl;
    cin >> x3 >> y3;
    
    cout << " Input the coordinates of point 4" << endl;
    cin >> x4 >> y4;
    
    
    
    // formula to find the slope of line segments 
    m1 = y2 - y1 / x2-x1;
    m2 = y4 - y3 / x4-x3;
    slope = (m1+m2)/(1-(m1*m2));
   
    if (m1*m2 < 0 ){
        cout << " The Angle is 90 Degrees"<<endl;
    }
        if (m1 == m2){
            cout << " The lines are Parallel" << endl;
        }
        else { 
            cout << " The Slope is " << slope << endl;
        }
    
    
    


    

    return 0; // exit stage left
}

