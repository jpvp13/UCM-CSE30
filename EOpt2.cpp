
#include <iostream>
using namespace std;

int n = 0;

int main () {
    
    //cout << "Enter a number" << endl;
    
    cin >> n;
    
    while (n != -1 && n > 0) {
        if (n % 2 == 0) {
            cout << "EVEN" << endl;
            
        } else  {
            cout<< "ODD" << endl;
            
        }
        cin >> n;
    }
    
  //  if (n == -1){
    //    cout << endl;
        
   // cout << "value of n is " << n << endl;
    
    return 0;
    
}

