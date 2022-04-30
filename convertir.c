#include <string.h>
#include <stdio.h>
#include "convertir.h"

void convertir (char message[]){
    char accent[33] = {é,ê,ë,è,â,ä,à,á,ã,å,ç,ù,ú,û,ü,ÿ,ñ,ö,ô,ó,ò,ï,î,í,ì,Ö,Ñ,É,Ä,Å,Ü,Ç,Ÿ};
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
