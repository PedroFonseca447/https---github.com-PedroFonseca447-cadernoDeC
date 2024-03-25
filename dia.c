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

    printf("%.1f", somatorio);

    return 0;   
    //certo
} 