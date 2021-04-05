
#ifndef RANDFILL_H
#define RANDFILL_H

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void random_fill(int arr[], int size, int min, int max){
    
    //taking time seed and generating random integers 
    srand(time(0)); 
    
    // identifying range 
    int range = max - min;
    
    // iterating for size of array
    for(int i=0;i<size;i++){
        
        // creating numbers within specified range
        arr[i] = min + (rand()%range);
    }
    
}

#endif 

