

#ifndef UNIQUESUM_H
#define UNIQUESUM_H


#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

// function
int sum_unique(int arr[], int size){ 
    // sort out the array
    sort(arr, arr + size);
        // initialize variable 'sum' with 0
        int sum = 0;
            //iterate the loop across the array.
            for (int i=0; i<size; i++){  
            // make sure consecutive numbers aren't exactly the same     
            if (arr[i] != arr[i+1]) 
            // if condition is met, than add 'sum' with previous number 
            sum = sum + arr[i];  
}
// output sum 
return sum;   

}
#endif /* UNIQUESUM_H */

