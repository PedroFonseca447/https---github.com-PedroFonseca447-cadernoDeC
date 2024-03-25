#include <stdio.h>
//pegar um erro como seria
float divisao(float a, float b, float *r)
{
    
    if( b == 0)
        return -1;

        *r = a/b;

    return 0;

}



int main()
{

    float a = 10;
    float b = 0;
    float r;

    if(divisao(a,b, &r)<0){
        printf("Erro na divisao por 0");
        return -1;
    }

    printf("r=%f\n");

    return 0;
}