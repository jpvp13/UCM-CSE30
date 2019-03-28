//#include <stdio.h>
#include <iostream>
#include <string>
#include<fstream>

using namespace std;


int main () {
    
    string word;
    int total=0;
    
    ifstream in("words.txt");
    
    while(in >> word) {
        
        //cout << word << endl;
        total++;
    }
    
    
    cout << total ;
    
    
    return 0;
}
