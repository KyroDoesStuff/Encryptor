#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

void encrypt(char text[], int shift){
    for(int i=0; text[i] !='\0'; i++){

        char ch = text[i];

        if(isupper(ch)){
            text[i] = (ch - 'A' + shift) % 26 + 'A';
        }
        else if(islower(ch)){
            text[i] = (ch - 'a' + shift) % 26 + 'a';
        }
    }
}

void decrypt(char text[], int shift){
    for(int i=0; text[i] !='\0'; i++){

        char ch = text[i];

        if(isupper(ch)){
            text[i] = (ch - 'A' - shift + 26) % 26 + 'A';
        }
        else if(islower(ch)){
            text[i] = (ch - 'a' - shift + 26) % 26 + 'a';
        }
    }
}