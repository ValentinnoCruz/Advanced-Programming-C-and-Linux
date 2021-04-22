

#ifndef SEARCH_H
#define SEARCH_H

int search(int key, int arr[], int size) {
    
    // check every single value in the array
    for (int position = 0; position < size; ++position) { 
        
        // when the array value is = to the key
        if (arr[position] == key)  
            
            // return the pos of the key
            return position;   
    }
    // if key isnt found within array, print -1
    return -1;  
}

#endif /* SEARCH_H */

