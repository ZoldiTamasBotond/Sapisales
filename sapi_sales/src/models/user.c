//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#include "../../headers/models/user.h"

char* getUserType(enum UserType type){
    switch (type) {
        case STUDENT:
            return "Student";
        case TEACHER:
            return "Teacher";
        default:
            return "Undefined";

    }
}

char* getGender(enum Gender type){
    switch (type) {
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:
            return "Undefined";
    }
}

char* getSpetialization(enum Spetialization type){
    switch (type) {
        case INFORMATICS:
            return "Informatics";
        case COMPUTER_SCIENCE:
            return "Computer_Science";
        case AUTOMATION:
            return "Automation";
        case TELECOMMUNICATION:
            return "Telecommunication";
        case MATHEMATICS_INFORMATICS:
            return "Mathematics_Informatics";
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";

    }
}

void createUser(User** user){
    *user = malloc(sizeof(user));
}

void setUserData(User* user,char* name, enum UserType type,enum Gender gender, enum Spetialization stearate, int birthYear,int birthMonth,int birthDay){
    user->id = ++numberOfUsers;
    user->spetialization = stearate;
    user->date.year = birthYear;
    user->date.month=birthMonth;
    user->date.day=birthDay;
    user->gender = gender;
    user->type = type;
    strcpy(user->name,name);
}

void printUser(User *user){
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPETIALIZATION: %s\n"
           "\t - BIRTH YEAR: %i\n"
           "\t - BIRTH MONTH: %i\n"
           "\t - BIRTH DAY: %i\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpetialization(user->spetialization),
           user->date.year,
            user->date.month,
            user->date.day);
}