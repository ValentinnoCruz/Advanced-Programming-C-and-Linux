
#include <cstdlib>
#include <iostream>
#include "runsum.h"

using namespace std;


int main()
{

    
    // check
    int arr[] = {0,0};
    
    // perform function
    running_sum(arr,4);
 
    // output array 
    for(int i = 0;i<4;i++){
        cout << arr[i]<<" ";
        }
    return 0;
}