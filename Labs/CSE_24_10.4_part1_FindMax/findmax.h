
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

