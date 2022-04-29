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
