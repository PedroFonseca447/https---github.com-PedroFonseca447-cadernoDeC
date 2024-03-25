#include <math.h>
#include <stdio.h>

int main(){

    int i;
    scanf("%d", &i);

    if(i%10 ==0 || i%5==0 || i%2==0 ){
        printf(" é divisivel por pelo menos um dos 3");
    }
    else{
        printf("ñ é divisivel");
    }
    return 0;
}// exercício certo