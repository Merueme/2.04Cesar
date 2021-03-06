/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N? de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitul? :    Chiffrement de messages                                      *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-pr?nom1 : Durand Raphael                                               *
*                                                                             *
*  Nom-pr?nom2 : Bressolles Paul                                              *
*                                                                             *
*  Nom-pr?nom3 : Calvet Baptiste                                              *
*                                                                             *
*  Nom-pr?nom4 : Bernadet Thomas                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : convertir.c                                               *
*                                                                             *
******************************************************************************/

#include <string.h>
#include <stdio.h>
#include "convertir.h"

void convertir (char message[]){
    char accent[33] = {?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?};
    char brut[33] = {e,e,e,e,a,a,a,a,a,a,c,u,u,u,u,y,n,o,o,o,o,i,i,i,i,O,N,A,A,A,U,C,Y};
    for (int i = 0, i < strlen(message), i++){
         for (int n = 0, n < 33, n++){
            if (message[i] == accent[n]){
                message[i] = brut[n];
                break;
            }
         }
    }
}
