#include <string.h>
#include <stdio.h>
#include "dechifrer.h"

void dechiffre(char[] message, int cle){
    for (int i = 0, i < strlen(message),i++){
        if (message[i] > 64 && message[i] < 91) {
            if (message[i] - cle < 65){
                message[i] = message[i] - cle + 26;
            } else {
                message[i] = message[i] - cle;
            }
        } else if (message[i] > 96 && message[i] < 123){
            if (message[i] - cle < 97){
                message[i] = message[i] - cle + 26;
            } else {
                message[i] = message[i] - cle;
            }
        }
    }
}
