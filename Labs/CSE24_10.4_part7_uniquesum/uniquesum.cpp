#include <iostream>
#include <algorithm>
#include "uniquesum.h"

int main()

{

int arr[] = {3,1,3,2,1};

int size = sizeof(arr)/sizeof(int);

cout << sum_unique(arr, size);

return 0;

}