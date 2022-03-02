//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#include "../../headers/models/product.h"

char* getProductType(enum ProductType type){
    switch (type) {
        case GROCERY:
            return "Grocery";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";
    }
}

void createProduct(Product** product){
    *product= malloc(sizeof (product));

}
void setProductData(Product* product,char* id,char* name,enum ProductType type, unsigned int amount,double  price){
    strcpy(product->id,id);
    strcpy(product->name,name);
    product->type = type;
    product->amount = amount;
    product->creationDate = time(NULL);
    product->price= price;
}

void printProduct(Product* product){
    printf("%s details:\n"
           "\t - ID: %s\n"
           "\t - TYPE: %s\n"
           "\t - AMOUNT: %u\n"
           "\t - CREATION DATE: %lld\n",
           product->name,
           product->id,
           getProductType(product->type),
           product->amount,
           product->creationDate);
}