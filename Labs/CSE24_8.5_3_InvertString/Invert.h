

#ifndef INVERT_H
#define INVERT_H


std::string transform_case(std::string str){
    
    
    int v = str.size(); // ascii value inc. to invert letters
    
    
    // inc/dec ascii value by 32 will invert them. 
    for(int i=0; i < v; i++){
        
        // E always upper case, and A remain the same
        if(str[i]=='A' or str[i]=='a' or str[i]=='E' 
                       or str[i]=='e' or str[i]==' '){
            
            continue;
        }
        else if(str[i] >= 'a' and str[i] <= 'z'){
            
            // transform into upper case
            str[i]-=32; 
        }
        else{
            // transform into lower case
            str[i]+=32; 
        }
    }
    return str;
    
}

#endif /* INVERT_H */

