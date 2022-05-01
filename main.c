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
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/

#include "chiffrer.h"
#include "convertir.h"
#include "dechifrer.h"
#include "verifier.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

void main(char message[], int cle){
    char answ[];

    //if (verifier(cle)){
    //  cle = convertir(cle)

    if (verifier(message)){
        answ = convertir(message);
        printf("Le message doit il etre chiffrer ?(y/n)\n");
        scanf("%c", &rep);
        if (rep == 'y'){
            answ = chiffrer(answ, cle);
            printf("Le message chiffrer est :\n");
        } else if (rep == 'n'){
            answ = dechifrer(answ, cle);
            printf("Le message dechiffrer est :\n");
        }
        printf("%s\n", answ);
    } else{
        printf("Erreur : Caracteres non valide\n");
    }

    //}
}
