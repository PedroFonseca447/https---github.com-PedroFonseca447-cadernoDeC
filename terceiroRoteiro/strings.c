#include <stdio.h>
#include <string.h>

// esse é o compare entre strings, verifica se sao iguais e qual é a maior
// retorna -1 se 1<2 , 1 se 1 > 2 e 0 se forem iguais.
int strcmp(char str1[], char str2[])
{

    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] < str2[i])
            return -1;

        else if (str1[i] > str2[i])
            return 1;
    }
    return 0;
}

int main()
{

    // como inicio do terceiro roteiro, iremos estudar as strings
    // em c a string fica armazenada em memória como se fosse um vetor
    // na última posição é necessário que fique preenchida com um '\n'
    // para assim indicar null ao compilador, não é necessário colocar
    // pq o nosso proprio compilador já faz essa função.

    // vetor de strings terminado com null ou /0
    char str1[] = "Hello";
    // esse pode dar problema caso estrapole o valor do buffer str1
    //  nesse caso ola mundo nao funcionaria por ser mais caracteres
    strcpy(str1, "Ola");

    sprintf(str1, "Ola");

    // strncat é uma boa prática de uso, para evitar problemas
    // é bom para garantir que o string n estrapole e copia até o /0 ou n

    printf("str1=%s\n", str1);
    return 0;
}
