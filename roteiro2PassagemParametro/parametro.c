#include <studio.h>

int func(int *x)
{//o * nessa função faz que o "X" receba e possa acessar o conteúdo em memória que esta guardando o valor de x
    *x = 2;
    return x;
}

int main(){

    int x = 0;

    func(&x);//esse & pega o ponteiro de onde o x esta armazenado o substituindo de 0 para 2
    //assim se acessa e le oq esta no x armazenado em memória, pegando a referencia de em qual lugar ele esta
    //o uso do & é para apontar para a posição de memoria do parametro x

    printf("x=%d\n",x);

    return 0;
}