#ifndef FindMin_h
#define FindMin_h

using namespace std;
// Declare and define the findMin function here
int findMin (int numbers[] ,int Start ,int end){
    
    int search = numbers[Start];
    
    //cout << "TEST" << endl;
    
    int pos = Start;
    
    for(int i = Start; i < end; i++ ){
        
        if(numbers[i] < search){
            search = numbers[i];
            pos = i;
        }
        
    }
    return pos;
}
// Do not write any code below this line
#endif
