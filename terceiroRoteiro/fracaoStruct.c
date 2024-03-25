#include <stdio.h>



struct fracao{
    float numerador;
    float denominador;
};


float soma(struct fracao *frac, struct fracao *fracB){

    return ((*frac).numerador/ (*frac).denominador) +  ((*fracB).numerador/ (*fracB).denominador);

}

float multiplica( struct fracao *frac, struct fracao *fracB){

    return ((*frac).numerador/ (*frac).denominador) *  ((*fracB).numerador/ (*fracB).denominador);

}

int main(){

    struct fracao f1;
    struct fracao f2;

    f1.numerador = 30;
    f1.denominador = 15;

    f2.numerador = 60;
    f2.denominador = 2;


    float somas = soma(&f1,&f2);
    
    float multiplicas = multiplica(&f1,&f2);

    printf("Valor da soma: %f\n", somas);
    
    printf("Valor da multiplicacao: %f\n", multiplicas);
}