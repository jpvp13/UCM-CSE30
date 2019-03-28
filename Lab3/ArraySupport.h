#ifndef arraySupport_h
#define arraySupport_h

// A function to get the value at a specific position
int getIndex(int* list, int pos){
    int n;
    // Provide your code here...
    for(int i = 0; i < 5; i++){
        if(i == pos){
            n = list[i];
           // return n;
           // std::cout << n << std::endl;
            
        }
        
    }
    return n;
}

#endif

//list[3] = *(arr+3);
//Simpler answer than what i did...


// while(list[i]){
//    if(i == pos){
//        int n = list[i];
//        std::cout << n << std::endl;
//        }
//        i++;
