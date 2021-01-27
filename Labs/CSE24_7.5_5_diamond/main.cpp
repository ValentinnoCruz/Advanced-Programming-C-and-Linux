/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 7.5 Part 5 Quadratic Plotting
 * Created on February 116, 2021, 6:53 PM
 */



#include <iostream>



using namespace std;

int main() {
        float q, // assign variables
              w,
              e; 
        // users inputs for inputs
        cin >> q >> w >>e;
        
        float y,
              x = -10; 

        while(x <= 10){                             // loop for < 10
                y = (q*x*x/100) + (w*x/10) + e;    // calculating y for x
                cout << "(" << x/10 << "," 
                     << y << ")" << endl;        // print both x & y
                     x = x + 1;                 // update count
        }
        
        return 0;
}