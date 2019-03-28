#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"
using namespace std;
// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements
int insertion_sort(int numbers[], int len){
    
    //int j = len;
    
    
    for (int i = 1; i < len; i++){
        
        int j = i;
        
        
        while ( j > 0 && numbers[j-1] > numbers[j]){
            
            swap (numbers, j-1,j);
            j = j - 1;
            
        }
    }
    return 0;
}



// Do not write any code below this line
#endif
