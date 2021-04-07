

#ifndef STRINGREGROUP_H
#define STRINGREGROUP_H



#include <cctype>
#include <string>


std::string regroup(std::string input){
    
   //moves nums to the right and letters left
   std::string output = "";                  
   
   for(int i = 0; i < input.length(); i++){
       
       // go through string index
       if(isalpha(input[i])){          
           
           //if char is letter, print
           output = output + input[i];
       }
       
   }
   
   for(int i = 0; i < input.length(); i++){
       
       // go through string index
       if(!isalpha(input[i])){    
           
           //if not char or num, append
           output = output + input[i];
       }
       
   }
   return output;
}


#endif /* STRINGREGROUP_H */


