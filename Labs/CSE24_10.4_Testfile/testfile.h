//==================        ==================
//==================        ==================
//================== Part 1 ==================
//==================        ==================
//==================        ==================


#ifndef FINDMAX_H
#define FINDMAX_H

int find_max(int arr[], int size){
   int max = arr[0];
  
   for(int i = 1;i<size;i++){ // go through index (1 - size-1) in a loop
       if(max < arr[i]){     // making sure that max is less than arr[i]
           max = arr[i];    // updating max
       }
   }  
   // print out max
   return max;
}

#endif /* FINDMAX_H */



//==================        ==================
//==================        ==================
//================== Part 2 ==================
//==================        ==================
//==================        ==================

#ifndef MAXPOS_H
#define MAXPOS_H

int find_max_pos(int arr[], int size){
   int max_pos = 0;
  
   // looping through indexes from 1 to size-1
   for(int i = 1;i<size;i++){
       // checking arr[i] is greater than arr[max_pos]
       if(arr[max_pos] < arr[i]){
           // updating max_pos
           max_pos = i;
       }
   }  
  
   // returning max
   return max_pos;
}


#endif /* MAXPOS_H */



//==================        ==================
//==================        ==================
//================== Part 3 ==================
//==================        ==================
//==================        ==================



#ifndef SEARCH_H
#define SEARCH_H

int search(int key, int arr[], int size) {
    
    // check every single value in the array
    for (int position = 0; position < size; ++position) { 
        
        // when the array value is = to the key
        if (arr[position] == key)  
            
            // return the pos of the key
            return position;   
    }
    // if key isnt found within array, print -1
    return -1;  
}

#endif /* SEARCH_H */



//==================        ==================
//==================        ==================
//================== Part 4 ==================
//==================        ==================
//==================        ==================



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



//==================        ==================
//==================        ==================
//================== Part 5 ==================
//==================        ==================
//==================        ==================


#ifndef TRIMAVG_H
#define TRIMAVG_H

float trimmed_average(float values[], int size){
   float max,min,sum = 0,avg;
   int i;
   max = values[0];
   min = values[0];
   sum = values[0];
   for(i = 1; i < size; i++){
       if(max < values[i])
           max = values[i];
       if(min > values[i])
           min = values[i];
       sum = sum + values[i];
   }
   sum = sum - (max + min);
   avg = sum / (size-2);
  
   return avg;
}



#endif /* TRIMAVG_H */





//==================        ==================
//==================        ==================
//================== Part 6 ==================
//==================        ==================
//==================        ==================



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



//==================        ==================
//==================        ==================
//================== Part 7 ==================
//==================        ==================
//==================        ==================



#ifndef UNIQUESUM_H
#define UNIQUESUM_H



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



//==================        ==================
//==================        ==================
//================== Part 8 ==================
//==================        ==================
//==================        ==================



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









