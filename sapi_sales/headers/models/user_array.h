//
// Created by Zoldi Tamas Botond on 2022-03-09.
//

#ifndef SAPISALES_USER_ARRAY_H
#define SAPISALES_USER_ARRAY_H

#include "user.h"

typedef struct {
    User** Users;
    int maxUsers;
    int numUsers;
}UserArray;

#endif //SAPISALES_USER_ARRAY_H
