#include <stdio.h>
#include <string.h>

#define MAX 100

char criptografia(char *key);

int main(){

    /*DECLARACAO*/
    char palavras[] = "Gabriel Henrique dos Santos Ferreira";

    printf("A encriptacao é: %s", criptografia(palavras));


return 0;
}

/*FUNCAO DE CRIPTOGRAFIA*/
char criptografia(char *key){

    char keyTemp[strlen(key)];
    int i = 0;

    while(*(key + i) != '\0'){
        keyTemp[i] = *key + 1;
        i++;
    }

    return keyTemp;
}
