//
// Created by Zoldi Tamas Botond on 2022-03-16.
//

#include "../../headers/stack/product_stack.h"

void createProductStack(ProductStack **productStack,unsigned int capacity){
    *productStack = (ProductStack*) malloc(sizeof (ProductStack ));
    (*productStack)->capacity=capacity;
    (*productStack)->products = (Product**)malloc(sizeof (Product*));
    (*productStack)->top=0;
    for(int i=0;i<capacity;i++){
        (*productStack)->products[i] = (Product*)malloc(sizeof (Product));
    }
}
void push(ProductStack *productStack,Product *product){
    if(stackIsFull(productStack)==false){
        (*productStack).products[productStack->top]=product;
        productStack->top++;
    }
}
void pop(ProductStack *productStack){
    if(stackIsEmpty(productStack)==false){
        (*productStack).products[productStack->top-1]=NULL;
        productStack->top--;
    }
}
Product* top(ProductStack *productStack){
    return (*productStack).top;
}
bool stackIsEmpty(ProductStack *productStack){
    if(top(productStack)==0){
        return true;
    }
    else {
        return false;
    }
}
bool stackIsFull(ProductStack *productStack){
    if(top(productStack)==productStack->capacity){
        return true;
    }
    else {
        return false;
    }
}
void deleteProductStack(ProductStack **productStack){
    while(stackIsEmpty(productStack)){
        pop(productStack);
    }
}

