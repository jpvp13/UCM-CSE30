#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
  
    int n ;
    int i;
   
    string txt;
    getline(cin,txt);
    
     cin >> n;
    
    
    for (i = 0; i < n; i++) {
        cout << txt;
    }
    
    //cout << endl;

    return 0;
}
