//esses arquivos ajudam a preservar os dados, seja ele de texto ou binário. Texto ocupa mais espaço 
//porém é melhor visualmente do que programas em arquivos binários.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[64];
    int num;
    FILE *fptr;

//fptr = fopen("teste.txt", "w");
//para persistir os nomes inseridos

    fptr = fopen("teste.txt", "ab");


    if (fptr == NULL) {
        printf("erro na leitura do arquivo \n");
        return -1;
    }

    // parte que pega a string no terminal
    printf("Insira um nome: ");
    scanf("%s", nome); // Removed the '&' before nome
    fprintf(fptr, "n1: %s\n", nome);

    printf("Insira um numero: ");
    scanf("%d", &num);
    fprintf(fptr, "n2: %d\n", num);

    fclose(fptr);
    return 0;
}


