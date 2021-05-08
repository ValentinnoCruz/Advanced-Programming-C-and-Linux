

#ifndef REFLECT_H
#define REFLECT_H



bool symmetric(std::string str){
    char ChR,ChR_1;
    
    //get string length 
    int leng = str.length(); 
    
    //when string is odd
    if(leng%2!=0) {
        // mid string value
        ChR = str[leng/2]; 
    
    if(ChR=='O' || ChR=='A' ||ChR=='H' || ChR=='I' || ChR=='M' || ChR=='T' ||ChR=='U' 
                || ChR=='V'||ChR=='W'||ChR=='X'||ChR=='Y'||ChR=='0'||ChR=='8'){
     
    // return true when middle char is symmetric    
    return true; 
    }

    else{
        return false;
    }
}
    // when str length is an even
    else {
        ChR = str[(leng/2)-1];  // first value of the middle
        ChR_1 = str[leng/2];    //2nd value
        
        if((ChR=='1'&& ChR_1=='I')||(ChR=='2'&& ChR_1=='S')||(ChR=='5'&& ChR_1=='S')||
           (ChR=='3'&& ChR_1=='E')||(ChR=='9'&& ChR_1=='P')||(ChR=='J'&& ChR_1=='L')){
        
         // return true, iff the middle 2 ChRar is symmetric
        return true; 
        }
        
        else{
        return false; // otheriwse return false 
        }
    }
}

#endif /* REFLECT_H */

