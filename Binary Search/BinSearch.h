//  BinSearch.cpp
//  Binary Search
//
//  Created by John Villalvazo on 10/14/18.
#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val){
    // Provide your code here

    long left = 0;
    long right = n-1;
    
    while(left <= right){
        long mid = (left + right)/2;
        if(list[mid] < val){
            left = mid + 1;
        } else if (list[mid] > val){
            right = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}
    
    

    
    
    
//    for(long i = 0; i < n; i++){
//        if(list[i] == val){
//            return i;
//        }
//    }
//   return -1;
//}

#endif
