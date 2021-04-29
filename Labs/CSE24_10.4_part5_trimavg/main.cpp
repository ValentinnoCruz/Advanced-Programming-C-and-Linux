
#include <cstdlib>
#include <iostream>
#include "trimavg.h"

using namespace std;


float trimmed_average(float values[], int size);

int main(){
   float values[] = {7, 9, 13, 19, 3};
   int size = 5;
   cout << trimmed_average(values, size);
  
   return 0;
}