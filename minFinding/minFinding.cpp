#include <iostream>
#include "FindMin.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int size;
    std::cin >> size;
    
    const int len = size;
    
    int numbers[len];
    
    for (int i = 0; i < len; i++) {
        std::cin >> numbers[i];
    }
    
    
    int start;
    std::cin >> start;
    
    int end;
    std::cin >> end;
    
    
    int minIndex = findMin(numbers, start, end);
    
    std::cout << "Smallest number in range (" << start << " - " << end << "): " << numbers[minIndex] << std::endl;
    
    return 0;
}
