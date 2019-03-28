//  Created by John Villalvazo on 12/12/18.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Queue.h"

using namespace std;

struct HashTable {
    long size;
    vector <Queue*> hashtable;
    
    //default constructor
    HashTable(){
        for(int i = 0; i < 10; i++){
            //creates the 10 queue pointers
            hashtable.push_back(new Queue());
        }
        
    }
    
    
    //parameterized constructor
    HashTable(long sizeH){
        size = sizeH;
//        total = 0;
        for(int i = 0; i < 10; i++){
            
             hashtable.push_back(new Queue);
        }
       
    }
    
    long hash(long input){
        //returns the positions in which the value will be placed into the chain
        return input % size;
    }
    
    
    void insert(long value){
        
        long element = hash(value);
        //this part finds the value where it belong int he queues and pushes that value back to accommodate the value
        hashtable[element]->push(value);
        
        
    }
    
    bool find(long value){
        
        long element = hash(value);
        
        //returns true if the value is found within the hashtable
        return hashtable[element]->find(value);
        
        
    }
    
    
    void print(){
        
        for(int i = 0; i < size;i++){
            cout << i << ": ";
            
            //shows the print function which place value to print
            hashtable[i]->print();
            cout << endl;
            
        }
    }
    
    
    ~HashTable(){
        
        for(int i = 0; i < size; i++){
            //erasing the chain at that value place
            Queue* temp = hashtable[i];
            //points the temp pointer at another queue
            temp->~Queue();
            //sets the selected pointer of a queue equal to NULL
            hashtable[i] = NULL;
            
        }
        
        
    }
    
    
};








#endif /* HashTable_hpp */
