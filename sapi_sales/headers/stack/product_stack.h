//
// Created by Zoldi Tamas Botond on 2022-03-16.
//

#ifndef SAPISALES_PRODUCT_STACK_H
#define SAPISALES_PRODUCT_STACK_H

#include <product.h>
#include <stdbool.h>

typedef struct {
    unsigned int capacity;
    int top;
    Product** products;
}ProductStack;

void createProductStack(ProductStack **productStack,unsigned int capacity);
void push(ProductStack *productStack,Product *product);
void pop(ProductStack *productStack);
Product* top(ProductStack *productStack);
bool stackIsEmpty(ProductStack *productStack);
bool stackIsFull(ProductStack *productStack);
void deleteProductStack(ProductStack **productStack);

#endif //SAPISALES_PRODUCT_STACK_H
