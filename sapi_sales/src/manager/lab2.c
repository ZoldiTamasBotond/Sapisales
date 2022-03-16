//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#include "lab2.h"



void testUserFunctionalities(){
    //After lab2 this need to be commented because the birth year of the user is changed to BirthDate stuct
    //Declaring user pointers
    User *user1;

    //Creating users
    //createUser(&user1);

    //Fill with data
    //setUserData("Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);

    createUser(&user1);
    setUserData(user1,"Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980,4,26);

    //Print users
    printUser(user1);

    //Delete users
    //deleteUser(&user1);

}

void testProductFunctionalities(){
    Product *product1;

    Product *product2;
    Product *product3;

    createProduct(&product1);
    setProductData(product1,"MS1","Apple",FRUIT,10,3.2);
    createProduct(&product2) ;
    setProductData(product2,"MS2","Book",SCHOOL,4,7.9);
    createProduct(&product3);
    setProductData(product3,"MS3","Tomato",GROCERY,20,8.4);

    printProduct(product1);
    printProduct(product2);printProduct(product3);


}
