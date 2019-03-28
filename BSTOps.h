#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occurrences(Node* root, int value){
    // Provide your code here
    int count = 0;
    int occur = search(root, value);

    if(root == NULL){
        return count;
    }
    
    if (root->left != NULL  && value == occur) {
        return count;
    }
    return count;
}

#endif
