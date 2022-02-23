//
// Created by Zoldi Tamas Botond on 2022-02-23.
//

#include "../headers/errors.h"

void printErrorMessege(enum ErrorType errorType){
    switch (errorType)
    {
        case MEMORY_ALLOCATION :
            printf("Memoria lefoglalasban hiba");
            break;
        case FILE_NOT_FOUND :
            printf("A file nem talalhato meg");
            break;
        case NULL_POINTER_EXCEPTION :
            printf("Null pointert talalt");
            break;

        default:
            break;
    }
}
