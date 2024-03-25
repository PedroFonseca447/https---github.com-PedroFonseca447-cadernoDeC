#include <stdio.h>

int notaDec(int *x) {
    int contador = 0;
    //lembrar de q sempre q for opear assim o uso do * se faz necessário
    while (*x != 0) {
        if (*x >= 100) {
            contador++;
            *x -= 100;
        }
        else if (*x >= 50 && *x < 100) {
            contador++;
            *x -= 50;
        }
        else if (*x >= 10 && *x < 50) {
            contador++;
            *x -= 10;
        }
        else if (*x >= 5 && *x < 10) {
            contador++;
            *x -= 5;
        }
        else if (*x >= 1 && *x < 5) {
            contador++;
            *x -= 1;
        }
    }

    return contador;
}

int main() {
    int x;
    scanf("%d", &x);
    
    int notas = notaDec(&x);
    printf("Quantidade de notas: %d\n", notas);
    printf("Valor restante de x: %d\n", x);

    return 0;
}