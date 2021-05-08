/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * CSE 24 - 8.7 Reflection
 * Created on February 27, 2021, 7:40 PM
 */

#include <iostream>
#include "reflect.h"

using namespace std;

int main(){
    
    string str;
    
    cout<<"String: ";
    
    cin >> str; 
    
    //function called
    if(symmetric(str)==true) {
        
    //output
    cout << "Symmetric"; 
    }
    else{
        
    cout << "Not Symmetric";
    }

    return 0;
}
