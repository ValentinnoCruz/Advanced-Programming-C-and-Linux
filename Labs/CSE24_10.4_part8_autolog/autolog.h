
#ifndef AUTOLOG_H
#define AUTOLOG_H


#include <iostream>
using namespace std;

int autological(int arr[], int size){
    int result = -1; // result starts at -1

    for(int i=0; i<size; i++){ // initiate loop for size 
            int count = 0; // count and store freq of element i

        // if resultant does not equal element i
        if(arr[i] != result){ 
            for(int j=0; j<size; j++){ // initiate loop for size 
        if(arr[i] == arr[j]){ // if element j = element i, count up by 1
                count++;
            }
        }
        // if count = element i && resultant is lower than element i
        if(count == arr[i] && result < arr[i]){
                result = arr[i]; //connect result with element i
        }
    }
}
return result;  // output 
}
#endif /* AUTOLOG_H */

