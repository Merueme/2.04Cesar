#include <string.h>
#include <stdio.h>
#include "dechifrer.h"

void dechiffre(char message[], int cle){ //changer int cle par char cle[]
    for (int i = 0, i < strlen(message),i++){
        int code;
        code = cle; //mettre cette ligne en commentaire pour Vigenere

        //int t = i;
        //if (t > strlen(cle)]{
        //  t = t - strlen(cle)*(t%strlen(cle));
        //}
        //code = cle[t];

        if (message[i] > 64 && message[i] < 91) {
            if (message[i] - code < 65){
                message[i] = message[i] - code + 26;
            } else {
                message[i] = message[i] - code;
            }
        } else if (message[i] > 96 && message[i] < 123){
            if (message[i] - code < 97){
                message[i] = message[i] - code + 26;
            } else {
                message[i] = message[i] - code;
            }
        }
    }
}
