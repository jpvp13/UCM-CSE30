//  Created by John Villalvazo on 11/22/18.
#include <iostream>
#include "OpStack.h"
using namespace std;




int main(int argc, const char * argv[]) {
   // Stack* myStack = new Stack();
    Stack myStack;
    long num = 0;
    char let;
    bool active = true;
    long curr = 0;
    
    
    while(active){
        cin >> let;
        
    
    switch(let){
        case 'a':
            cin >> num;

            myStack.push(num,let);
                myStack.peek();
                curr =  curr + num;

                cout << "Total: " << curr << endl;
                break;
            
            
        case 's':
            cin >> num;
            
                
                myStack.pop();
                curr = curr - num;
                cout << "Total: " << myStack.pop() << endl;
            
            
        case 'z':
            
            cin >> num;
            
                myStack.
            
}
}
    
    
    return 0;
}


