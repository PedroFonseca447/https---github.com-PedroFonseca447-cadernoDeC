#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    /* data */
    char nome [64];
    int idade;
    float nota;
} aluno_t;



int aluno_salva(const char *arquivo, aluno_t*aluno){
   
    FILE *fptr = fopen("test.bin","wb");
    if(fptr == NULL){
        printf("ERROR CREATING FILE \n");
        return -1;
    }

    fwrite(aluno, sizeof(aluno_t),1, fptr);
    fclose(fptr);
    return 0;

}

int aluno_carrega(const chat *arquivo, aluno_t alunos[], int len){

    FILE * fptr = fopen("test.bin", "rb");
    if(fptr == NULL){
        printf("ERROR CREATING FILE \n");
        return -1;
    }

    int i;
    for(i=0; i< len; i++){
        if(fread(&alunos[i], sizeof(aluno_t),1 , fptr) !=1){
            //le ate o fim do arquivo terei q pesquisar mais para entender 
            //toda a estrutura
            break;
        }
    }
    fclose(fptr);
    return i;
}


int main (){
    
    aluno_t a = {"LET", 17, 5.4};
    aluno_t b = {"PEDRO",21, 6.0};
    aluno_salva("test.bin", &a);
    aluno_salva("test.bin", &b);


    aluno_t alunos[20];

    int retorno = aluno_carrega("test.bin",alunos, 20);
    int i;

    for(i=0; i < ret; i++){
        printf("%s, %d, %f\n", alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }


    return 0;
}
