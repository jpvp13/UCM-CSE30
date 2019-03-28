#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    
    int i = 0;
    int n;
   // int a = 0;
    //char W = static_cast<char>(a);
    char L;
    cin >> L;
    cin >> n;
    
    //internet said use this but like how?? save for later
    
   // W = static_cast<char>(L);
    //-2 is the number to signal a break in the reading of the code
    while (n != -2){
        
        if(n == -1){
            cout << endl;
        }
        
    
    for (i = n; i > 0; i--){
        //support code for what internet said but confusing af
        /*
        int asciiVal = (L % 16) + 16;
        char asciiChar = asciiVal;
         */
        cout << L;
    }
        
        cin >> L;
        cin >> n;
        //asks user for next numbers and character

    }
    /*
   for (i = 0; i == n-1; ++i) {
      
       cout << W;
    }
   
    
    while (i == n) {
         cout << W;
        i++;
    }
    */
    return 0;
}
