#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){
    // Provide your code here...
    for(int i = 0; i < size; i++){
        if(list[size - 1] < list[size]){
            return false;
        }
        
    }
    return true;
}

#endif
