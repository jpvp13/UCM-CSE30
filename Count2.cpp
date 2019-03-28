//#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include<fstream>
#include <locale>

using namespace std;


int main () {

    string sen;
    string word;
    cin >> word;
    int totalword = 0;
   // string a;
    int i = 0;
    //cin >> a;
    
    
   
    
    ifstream in("words.txt");
    
    for(i = 0; i != word.length(); i++){
        word[i]= toupper(word[i]);
    }
    
    while(in >> sen) {
        
        if (word.length() != sen.length()){
            //maybe try sen.length?? since we want to erase a entire word?
           sen.erase(sen.length()-1);
        }
        
        for(i = 0 ;i < sen.length(); ++i) {
            sen[i] = toupper(sen[i]);
        }
        
        if(word == sen){
            totalword++;
        }
        
        /*
        for(i = 0 ;i < word.size(); ++i)
        {
            if(ispunct(word[i]))
                i++;
            word.erase(word[i],i);
            cout << "hello" << endl;
        }
        */
        
        
    
            //cout << totalword ;
        }
        //cout << "test";
 
   // cout << totalword;
    
    
    //a = toupper(a);
    //cout<<a;
    

    cout << totalword << endl;
    
    return 0;
}
