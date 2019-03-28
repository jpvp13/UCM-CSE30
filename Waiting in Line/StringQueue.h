////  Created by John Villalvazo on 11/20/18.
#ifndef Queue_h
#define Queue_h

#include <string>

using namespace std;

struct Link {
    string Data;
    
    Link* Next;
};

struct Queue {
    
    Link* Head = NULL;
    Link* Tail = NULL;
    
    
    
    
    void push(string new_data){
        Link* node = new Link;
        node->Data = new_data;
        node->Next = NULL;
        
        if(isEmpty()) {
            
            Head = node;
            
            
        }
        else {
            Tail->Next = node;
            Tail = Tail->Next;
            
        }
        Tail = node;
        
    }
    
    
    string pop(){
        if(!isEmpty()){
            string temp = Head->Data;
            Link* tmp = Head;
            Head = Head-> Next;
            free(tmp);
            return temp;
            
            
        }
        return NULL;
    }
    
    
     string peek(){
     
     return Head->Data;
     }
    
     void print(string info){
     Link* p = Head;
     while(p != NULL){
     cout << p->Data;
     p = p->Next;
     }
     
     }
    
    
    bool isEmpty(){
        if(Head == NULL){
            return true;
        }
        return false;
    }
};
#endif
