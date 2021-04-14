
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

