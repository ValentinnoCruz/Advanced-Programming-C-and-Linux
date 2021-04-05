
#include "randfill.h"
#include <iostream>

using namespace std;


int main()
{
    
    int size=10;
    int arr[size];
    int min = 100;
    int max = 1000;
    
    // calling random_fill() to fill the array
    random_fill(arr,size,min,max);
    
    //printing the array elements
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}