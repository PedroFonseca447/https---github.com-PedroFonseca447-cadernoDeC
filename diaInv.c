#include <stdio.h>

int main(){
    float hora;
    float minutos;
    float segundos;

    scanf("%f",  &hora);
    scanf("%f",  &minutos);
    scanf("%f",  &segundos);

    float horasPassadas = hora * 3600;
    float minutosPassados = minutos * 60;
    
    float somatorio = horasPassadas+minutosPassados+segundos;

    float restante = 86400 - somatorio;

    printf("%.1f", restante);

    return 0;   
    //certo
} 