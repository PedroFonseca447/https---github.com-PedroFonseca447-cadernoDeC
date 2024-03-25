#include <stdio.h>

int main(){

    float i;
    scanf("%f",  &i);

    float celsius = 5.0/9.0 *(i-32);//se atentar na necessidade de utilizar o . para que a divsão n fique zerada

    printf("%.1f",celsius);

    return 0;
} 