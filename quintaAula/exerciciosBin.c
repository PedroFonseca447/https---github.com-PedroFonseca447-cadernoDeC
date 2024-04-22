#include <stdio.h>


unsigned int clear(unsigned int x){
    // o operador & atua como and, ai faz and com todos os bits zerados
    //assim zera os bits de x
    return x & 0;
}

unsigned int setOneBit( unsigned int x, int bit){
    //com o comando << voce shifta um bit para a esquerda
    //com isso ele é zerado no caso substituido por um 1
    return x | ( 0x1 << bit);//bit para saber qual será saltado
    //o operador ou/| atua como um suporte  para garantir que ao se comparar
    //10000 com 1001101 o 5 operador seja setado em 1
}

unsigned int clearBit(unsigned int x, int bit){
    //pela ordem dessa operação, primeiro se aplica a porta not 
    //após fazer shift no bit ou seja oq era 100 vai virar 011
    //com o and/& se garante a operação de comparação n alterando os valores anteriores
    //e mantendo o bit sinzalidado em 0


    return x & ~(0x1 << bit);
}

 unsigned int invertBit( unsigned int x, int bit){
    //com o uso da porta XOR garante que se o bit for
    //0 vai inverter para 1 e se for um vai inverter para 0
    return x ^ (0x1 << bit);
 }


int testBit( unsigned int x, int bit){
    // se for 0 com 0 volta zero se for 0 com 1 retorna um
    return (x & (0x1 << bit)) == 0 ? 0 : 1;
}

void imprime_bits( unsigned int x){

    for (int i=31; i >= 0; i--){
        unsigned int mask = 0x1 << i;
        if(( x & mask) == 0){
            printf("0");
        }else{
            printf("1");
        }
    }
    printf("\n");
}

int main(){
    unsigned int x = 0b00010101;
    unsigned int y = 0;

    printf("x: 0x%04x\n", x);
    imprime_binario(x);
    y = invertbit(x, 1);
    printf("invertbit(1): 0x%04x\n", y);
    imprime_binario(y);
    y = setbit(x, 10);
    printf("setbit(10): 0x%04x\n", y);
    imprime_binario(y);
    y = clearbit(x, 2);
    printf("clearbit(2): 0x%04x\n", y);
    imprime_binario(y);
    printf("testbit(2): %d\n", testbit(x, 2));
    return 0;
    
    
}