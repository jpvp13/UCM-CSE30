#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    int i;
    int x;
    int h;
    
    cin >> n;
    
    for (i = 2; i < n; i++) {
        x = 0;
        //divided by two becasue a prime number is only devisable by 1 and itself
        for(h = 2; h <= i/2; h++) {
            if(i % h == 0){
                x = 1;
            }
        }
        //checks to make sure that entered number isn't 1 and that the number cant be divided by itself.
        if(n != 1 && x == 0){
           cout << i << endl;
        }
        
        //cout << "x";
    }
    


    
    return 0;
}
