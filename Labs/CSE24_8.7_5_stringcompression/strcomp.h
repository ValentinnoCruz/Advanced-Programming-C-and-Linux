
#ifndef STRCOMP_H
#define STRCOMP_H


#include <cctype>
#include <string>
#include <sstream>

std::string compress(std::string inPut)  
{
   std::string outPut = "";
   
   // string outPut is first char of inPut
   outPut = outPut + inPut[0];   
   int count = 1;

   for (int i = 1; i < inPut.length(); i++){
       
       // go through index in a loop
       if (inPut[i] == inPut[i - 1]){
           
           count++;  //if match incriment by 1
       }
       
       else{
           //when char is mismatched with previous one
           if (count > 1){
               
               //change count to a string
               std::ostringstream cntStr;
               cntStr << count;
               
               //append string count 2 outPut
               outPut = outPut + cntStr.str();   
           }
           //append new char that appears first time
           outPut = outPut + inPut[i];   
           
           //set count back to 1
           count = 1;   
       }
   }
   if (count > 1){
       
       //check if count for the last char is > 1
       
       std::ostringstream cntStr;   //convert count to string
       cntStr << count;
       outPut = outPut + cntStr.str();   //append string count to outPut
   }
   return outPut;   //return outPut
}

#endif /* STRCOMP_H */

