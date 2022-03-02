//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#ifndef SAPISALES_USER_H
#define SAPISALES_USER_H

#include <stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"
#include <stdio.h>
#include <string.h>

enum UserType{
    STUDENT,
    TEACHER
};

enum Gender{
    FEMALE,
    MALE
};

enum Spetialization{
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,
    MATHEMATICS_INFORMATICS,
    ENGINEERING
};

typedef struct {
    int year;
    int month;
    int day;
}birthDate;


typedef struct {
    unsigned int id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Spetialization spetialization;
    birthDate date;
}User;

char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpetialization(enum Spetialization type);

void createUser(User** user);

void setUserData(User* user,char* name, enum UserType type,enum Gender gender, enum Spetialization stearate, int birthYear,int birthMonth,int birthDay);
void printUser(User* user);
//void deleteUser(User** use);

#endif //SAPISALES_USER_H
