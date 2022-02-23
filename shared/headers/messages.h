//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#ifndef SAPISALES_MESSAGES_H
#define SAPISALES_MESSAGES_H

#include <stdlib.h>
#include <stdio.h>

enum LabType{
    LAB2,
    LAB3,
    LAB4,
};

void printDescriptionMessage(enum LabType messageType);

#endif //SAPISALES_MESSAGES_H
