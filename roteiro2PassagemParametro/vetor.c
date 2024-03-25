#include <stdio.h>

void preenche(int vet[],int  tam){

 for(int i=0;i < tam; i++){
    vet[i] = tam-1;
 }

}


int main(){

    //vetor é um pouco diferente
    int vet[10];
    preenche(vet , 10);// nesse caso nao precisamos de & no vetor, por que o vetor já é uma referencia
    int i;
    
    for(int i=0; i < tam; i++)
        printf("vet[%d]=%d",i , vet(i));

        //se colocar *vet printa-se o tamanho do vetor aparentemente
        //falha de segmentação é igual a escrever em outra página
        //programas com esse erro permitem exploit e pirataria(gerando insegurança)
    
    return 0;
}