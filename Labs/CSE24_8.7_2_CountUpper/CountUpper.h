

#ifndef COUNTUPPER_H
#define COUNTUPPER_H

#include <cctype>
#include <string>


// give var to string
int count_upper(std::string s){
        int count = 0;
        for(int i = 0;i<s.length();i++){  // check conditions. 
                if(s[i]>='A' && s[i]<='Z'){ // check if current letter is between A and Z
                        count++;
                }
        }
        return count;  //print out 
}

#endif /* COUNTUPPER_H */

