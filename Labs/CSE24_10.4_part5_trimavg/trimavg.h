

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

