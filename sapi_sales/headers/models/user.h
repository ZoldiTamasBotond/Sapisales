//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#ifndef SAPISALES_USER_H
#define SAPISALES_USER_H

typedef struct User{
    int Id;
    char Name[50];
    enum UserType{
        tanar,
        diak,
    };
    enum Gender{
        no,
        ferfi,
    };
    int Birth_year;
    enum Specialization{
        Automatizalas,
        Informatika,
        Szamitastechnika,
        Tavkozles_vagy_Matematika_Informatika,
        Villamosmernoki_tanszek,
    };
} User;

char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpecialization(enum Specialization type);

void createUser(User** user);

void setUserData(
        User* user,
        char* name,
        enum Usertype type,
        enum Gender gender,
        enum Spacialization stearate,
        int birthYear
        );

void printUser(User* user, char* destination);
void deleteUser(User** user);

#endif //SAPISALES_USER_H
