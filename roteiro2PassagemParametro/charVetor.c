#include <stdio.h>

int main(){

    char str[10];
    str[0] = 'o'
    str[1] = 'a'
    str[2] = 'g'
    str [3] = '\0';
    //caso o char n seja encerrado com 0
    //o printf nao irá saber quando que ele para de demonstrar o vetor
    //o vetor deve ter em sua ultima posicao um zero sendo de caracteres
    
    printf("str%s\n", str);
    return 0;
}