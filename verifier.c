/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :    Chiffrement de messages                                      *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : Durand Raphael                                               *
*                                                                             *
*  Nom-prénom2 : Bressolles Paul                                              *
*                                                                             *
*  Nom-prénom3 : Calvet Baptiste                                              *
*                                                                             *
*  Nom-prénom4 : Bernadet Thomas                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : verifier.c                                                *
*                                                                             *
******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "verifier.h"

bool verifier(char message[]){
    for (int i = 0, i < strlen(message),i++){
        if (! isalnum(message[i])){
            return false;
        }
    }
    return true;
}
