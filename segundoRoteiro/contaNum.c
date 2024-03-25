#include <stdio.h>


int contVet( int vet[],int tam){

    int i;
    int j;
    int contador=0;
    //atenção ao inicializar o segundo
    for(i = 0; i < tam ; i++){
        for(j= i + 1; j < tam ; j++){

            if(vet[i]==vet[j]){
                contador++;
            }
        }

    }
    return contador;
     
}

int main(){

    int vet[10];

    vet[0]= 8;
    vet[1]= 8;
    vet[2]= 3;
    vet[3]= 5;
    vet[4]= 10;
    vet[5]= 20;
    vet[6]= 7;
    vet[7]= 0;
    vet[8]= 6;
    vet[9]= 5;

   
    int conta = contVet(vet,10);
     printf("Quantidade de notas: %d\n", conta);

    return 0;
}

