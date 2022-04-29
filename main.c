#include "chiffrer.h"
#include "convertir.h"
#include "dechifrer.h"
#include "verifier.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

void main(char[] message){
    char answ[];
    char rep;

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
}
