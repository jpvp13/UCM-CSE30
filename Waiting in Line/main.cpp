//  Created by John Villalvazo on 11/21/18.

#include <iostream>
#include "StringQueue.h"

using namespace std;



int main(int argc, const char * argv[]) {

    string name;
    char Oper;
    Queue queue;
    bool active = true;
    
    while(active){
        cin >> Oper;
    
    
   // cin >> Oper;
    switch(Oper){
        case 'a':
            cin >> name;
            queue.push(name);
            cout << name << " arrived" << endl;
            break;
        case 's':
            if(!queue.isEmpty()){
                cout << "Now Serving: " << queue.pop() << endl;
            } else {
                cout << "No customers waiting" << endl;
            }
            break;
            
        case 'n':
                if(!queue.isEmpty()){
                    cout << "Next in line: " << queue.peek() << endl;
                } else {
                    cout << "The waiting list is empty" << endl;
                }
                break;
            
            
        case 'q':
            while(!queue.isEmpty()){
                if(active){
                    cout << "Come back tomorrow: " << endl;
                    active = false;
                }
                cout << queue.pop() << endl;
            }
                Oper = false;
                break;
                
            }
           
    }
    cout << "Closing up now." << endl;
    

    return 0;
}
