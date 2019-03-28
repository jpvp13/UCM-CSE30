// Created by John Villalvazo 11/2/18
#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occurrences(Node* root, int value){
    // Provide your code here
   int count = 0;
//    int occurL = search(root->left, value);
//    int occurR = search(root->right, value);
//
//    if(root == NULL){
//        return count++;
//        //std::cout << "test" << std::endl;
//    }
//
//    if (root->left != NULL  && value == occurL) {
//       // occur = search(root->left, value);
//        return (count+1) + search(root->left, value);
//       // occurL = search(root->left->left, value);
//
//        //std::cout << "test" << std::endl;
//
//    } else {
//
//        return search(root->left, value);
//
//    }
//    if(root->right != NULL && value == occurR){
//
//      //  occur = search(root->right, value);
//
//        return (count+1) + search(root->right, value);
//
//       //std::cout << "test" << std::endl;
//    } else{
//
//        return search(root->right, value);
//    }
//    //std::cout<< "test" << std::endl;
//
//    return count;
//    //std::cout << count << std::endl;
    
//    int count = 0;
//
//    if(root == NULL){
//        return count;
//    }
//    if(root != NULL && root->data == value){
//        return count++;
//    }
//    if(root->left == NULL && root->right == NULL){
//        return count++;
//    } else{
//        return search(root->right, value) + search(root->left,value);
//    }
//    return count;
    
    
    
    
    
    
    //SUBMITTED AND WAS GRADED CORRECTLY
    
    
    if(root == NULL){
        return 0;
    }

    if(root->data == value){
        return 1 + occurrences(root->left,value) + occurrences(root->right,value);
    } else if(value < root->data){
        return occurrences(root->left,value);
    } else{
        return occurrences(root->right,value);
    }
    return count;
}

#endif
