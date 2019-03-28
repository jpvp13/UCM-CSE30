#include <iostream>
#include "FillUp.h"

using namespace std;

int main(int argc, const char * argv[]) {
    //int* p = NULL;
    
    // Read in the size from the user
    int size;
    cin >> size;
    //int arr[0];
    
    // Create an array of appropriate size

    int * arr = new int[size];
    
    // Call the fillUp function
    fillUp(arr,size);
    
    // Call the printPos function on last position
    printPos(arr,size-1);
    
    
    delete[] arr;
    return 0;
}
//need to use pointer to make sure that enough space is allocated

