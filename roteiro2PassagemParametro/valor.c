#include <stdio.h>;


int multiplica (int x){

    x = x * x;
    return x;
}



int main(){
    int t=10;

    printf("%d - %d\n", multiplica(t),t);
    //nesse caso só se passa o valor, onde t = 10 entra na
    //função multiplica com esse valor e é multiplicado para o 
    //valor de 100, retornando com o valor de x. Já o t na main
    //fica com o valor definido 10, já que nao ocorreu acesso
    //em memória.
}