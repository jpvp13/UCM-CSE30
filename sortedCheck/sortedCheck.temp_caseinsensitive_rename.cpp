#include <iostream>
#include "GiveMeData.h"
#include "Sorted_Check.h"

using namespace std;



int main() {
    
    long size;
    cin >> size;
    
    long* sortedNumbers;
    sortedNumbers = new long[size];
    
    long* unsortedNumbers;
    unsortedNumbers = new long[size];
    
    giveMeSortedData(sortedNumbers, size);
    giveMeUnsortedData(unsortedNumbers, size);
    
    bool sortedCorrect = sortedCheck(sortedNumbers, size);
    bool unsortedCorrect = sortedCheck(unsortedNumbers, size);
    
    if (sortedCorrect && !unsortedCorrect){
        std::cout << "Correct!" << std::endl;
    }
    else{
        std::cout << "Incorrect!" << std::endl;
    }
    
    delete[] sortedNumbers;
    delete[] unsortedNumbers;
    
    return 0;
}
