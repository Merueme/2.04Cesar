/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N� de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitul� :    Chiffrement de messages                                      *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-pr�nom1 : Durand Raphael                                               *
*                                                                             *
*  Nom-pr�nom2 : Bressolles Paul                                              *
*                                                                             *
*  Nom-pr�nom3 : Calvet Baptiste                                              *
*                                                                             *
*  Nom-pr�nom4 : Bernadet Thomas                                              *
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
