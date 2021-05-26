
#include <cstdlib>
#include <iostream>
#include "autolog.h"

using namespace std;


// it will only print out the number repeated the most amount of time.
// so if we have { 1, 2, 3, 4, 4, 5, 3} the answer will print 4 
// cuz although 3 is also repeated 2 times 4 > 3

// the numbers should repeat as many times as they appear
// 4 should be 4444, 3 = 333, etc etc 

    int main(){
    int arr1[] = {0,3,4,5};
    int arr2[] = {2,7,9,1,2,3};
    int arr3[] = {1,5,8,5,3,5};
    int arr4[] = {5,5,5,5,5,1};
        cout << autological(arr1,4) << endl;
        cout << autological(arr2,6) << endl;
        cout << autological(arr3,6) << endl;
        cout << autological(arr4,5) << endl;
        return 0;
}
    
    

