
#ifndef RUNSUM_H
#define RUNSUM_H

#include <iostream>

using namespace std;

// function definition for running_sum
void running_sum(int arr[], int size){
        // looping from 1 to size-1
        for(int i = 1;i<size;i++){
                // updating the value at index i
                arr[i] += arr[i-1];
        }
        
}


#endif /* RUNSUM_H */

