//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#ifndef SAPISALES_PRODUCT_H
#define SAPISALES_PRODUCT_H

#include <stdlib.h>
#include <sys/utime.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "useful.h"
#include "messages.h"
#include "errors.h"


enum ProductType{
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};

typedef struct {
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

void createProduct(Product** product);
void setProductData(
        Product* product,
        char id[10],
        char name[20],
        enum ProductType type,
                unsigned int amount);

void printProduct(Product* product);

#endif //SAPISALES_PRODUCT_H
