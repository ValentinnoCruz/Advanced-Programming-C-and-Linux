
#ifndef ROTATION_H
#define ROTATION_H




int rotation_distance(std::string a, std::string b){
    
    //if string are not equal, they cant be rotated
    if(a.size() != b.size()) 
        return -1;

    // chain string a 2 times and tie to string
    std::string temp = a + a; 
    
    // looks for string of caller than returns it
    int index = temp.find(b); 
    
    return index; //return if matched or not
}


#endif /* ROTATION_H */

