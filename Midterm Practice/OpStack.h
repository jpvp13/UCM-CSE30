////  Created by John Villalvazo on 11/20/18.
//#ifndef OpStack_h
//#define OpStack_h
//using namespace std;
//
//// Define the Link struct below...
//
//struct Link {
//    long data;
//    char op;
//
//    Link* next;
//
//};
//
//// Now define the Stack struct. It should be a stack of Links...
//
//struct Stack {
//    Link* Head;
//    Link* Tail;
//    Stack(){Head = Tail = NULL;}
//
//    void push (long new_data, char new_op){
//        Link* node = new Link();
//        node -> data = new_data;
//        node -> op = new_op;
//        node -> next = Head;
//        Head = node;
//
//
//    }
//
//    Link* pop (){
//        if (!isEmpty()){
//
//            Link* tmp = Head;
//            Head = Head -> next;
//            return tmp;
//        }
//        return NULL;
//    }
//
//    long peek(){
//
//        return Head->data;
//    }
//
//
//    bool isEmpty(){
//        if(Head == NULL){
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//
//};
//
//#endif
//


#ifndef OpStack_h

#define OpStack_h



// Define the Link struct below...



struct Link {
    
    
    
    long data;
    
    char op;
    
    Link *next;
    
};



// Now define the Stack struct. It should be a stack of Links...



struct Stack {
    
    
    
    Link *top;
    
    Stack()
    
    {
        
        top = nullptr;
        
    }
    
    
    
    void push(long data, char op)
    
    {
        
        if (top == nullptr)
            
        {
            
            top = new Link;
            
            top->data = data;
            
            top->op = op;
            
            top->next = nullptr;
            
        }
        else {
            
            Link *node = new Link;
            
            node->data = data;
            
            node->op = op;
            
            node->next = top;
            
            top = node;
            
        }
        
    }
    
    
    
    Link* pop()
    
    {
        
        if (isEmpty())
            
            return nullptr;
        
        else
            
        {
            
            Link *node = top;
            
            top = top->next;
            
            return node;
            
        }
        
    }
    
    
    
    bool isEmpty()
    
    {
        
        return(top == nullptr);
        
    }
    
};

#endif
