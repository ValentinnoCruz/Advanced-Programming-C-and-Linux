
/* 
 * File:   main.cpp
 * Author: valentinno Cruz
 * CSE_24 - 6.6 Part 1
 * Created on February 3, 2021, 8:40 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

  
    int choose; // declare variable for choice
    
    // ask user to make an option
    cout << "Enter Choice of units to convert:\n";
    cout << " 1. Temperature" << endl;
    cout << " 2. Distance" << endl;
    cout << " 3. Weight" << endl;
    cout << " Enter Choice: " << endl;
            
    cin >> choose;  // user inputs option
    
    
    //condition if Temperature is picked
    if (choose <= 1){
        cout << " Would you like to:\n";
        cout << " 1. convert Fahrenheit to Celsius?" <<endl;
        cout << " 2. convert Celsius to Fahrenheit?"<<endl;
        
        int choose2;     // variable assigned to users 2nd option
        cin >> choose2; // user inputs desired 2nd option
        
        
        // condition if the user selects Fahrenheit
        if (choose2 == 1){
            cout << " How many degrees Fahrenheit would you like to convert?" << endl;
           
            float faren,  // variable assigned for Fahrenheit
                   cEls; // variable assigned for Celsius 
            
            cin >> faren;                     // user inputs degrees F
            cEls = ((faren*5.0)-(5.0*32))/9; // conversion from Celsius to F
            cout << "Thats " << cEls 
                 << " Degrees Celsius" << endl; // output
        
            
        // condition if user selects Celsius
        if (choose2 == 2) {
             cout << " How many degrees Celsius would you like to convert?" << endl;
             float cEls,    // variable assigned for Celsius 
                   faren;  // variable assigned for Fahrenheit
             
             cin >> cEls;                    // User inputs Celsius degrees
             faren = (cEls * 9) / 5.0 + 32; // Conversion from Celsius to Fahrenheit 
             
             // Output the converted result.
             cout << "Thats " << faren << " Degrees Fahrenheit" << endl;
             
            }
            
        } 
        
    }
    
        // if distance is picked
        if (choose == 2 ){
            cout << " Would you like to:\n";
            cout << " 1. convert Feet to Meters?" <<endl;
            cout << " 2. convert Meters to Feet?"<<endl;
        
            float choose3;   //variable assigned to choice
            cin >> choose3; // user inputs selection
        
            // condition if the user selects feet
            if (choose3 == 1){
                cout << " How many Feet would you like to convert?" << endl;
        
                float feet,   // variable assigned to feet
                      Mtr;  // variable assigned to meter
            
           
                cin >> feet;                   // User inputs feet
                Mtr = feet * 0.3048;          // conversion from meters to feet 
                cout << "Thats " << Mtr      // Output the converted result.
                     << " Meters long" << endl;
            }
    }
    
        // condition if weight is selected
        if (choose == 3){
            cout << " Would you like to:\n";
            cout << " 1. Convert Pounds to Kilograms?" <<endl;
            cout << " 2. Convert Kilograms to Pounds?"<<endl;
        
            int choose4;     // variable assigned to choice
            cin >> choose4; // user inputs selection
        
        // condition if pounds is selected 
        if (choose4 == 1){
            cout << " How many Pounds would you like to convert?" << endl;
        
            float lbs,   // variable for pounds
                  kiLo; // variable for kilograms
            
            cin >> lbs;                 // User inputs Pounds
            kiLo = 0.453592*lbs;       // Conversion from Kilograms to Pounds 
            cout << "Thats " << kiLo  // Output the converted result.
                 << " Kilograms" << endl;
            
          
        // condition if pounds is selected 
        if (choose4 == 2){
            cout << " How many kilograms would you like to convert?" << endl;
        
            float lbs,  // variable for pounds
                  kiLo; // variable for kilograms
            
            cin >> kiLo;              // User inputs Pounds
            lbs = 2.2*kiLo;          // conversion from Kilograms to Pounds 
            cout << "Thats " << lbs // Output the converted result.
                 << " Pounds" << endl;
        }
        
        }
    
        }

    return 0;
}

