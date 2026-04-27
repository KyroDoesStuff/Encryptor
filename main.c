#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

int main(){
    char text[1000];
    int shift, choice;

    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("3. Exit\n");
    printf("enter choice: ");
    scanf("%d", &choice);
    getchar();

    switch(choice){
        case 1:
            printf("Encrypting Text.. \n");
            printf("enter text: ");
            fgets(text, sizeof(text), stdin);
    
            printf("enter shift: ");
            scanf("%d", &shift);
            getchar();  

            encrypt(text, shift);

            printf("encrypted text: %s", text);
            printf("\n");
            break; 
            
        
        case 2: 
            printf("Decrypting Text.. \n");
            printf("enter text: ");
            fgets(text, sizeof(text), stdin);

            printf("enter shift: ");
            scanf("%d", &shift);
            getchar();  

            decrypt(text, shift);

            printf("decrypted text: %s", text);
            printf("\n");
            break;  

        case 3:
            printf("Exiting.. \n");
            break;

        default:
            printf("enter valid choice");
    }
    return 0;
}
