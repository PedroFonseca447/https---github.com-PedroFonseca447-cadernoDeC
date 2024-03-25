#include <stdio.h>
#include <string.h>


int substring(char str1[] , char str2[]){

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    int i ;
    int j;

    for(i=0; i <= len1 - len2; i++){
        for(j=0; j < len2; j++){
            //pega e compara se o i+j ou seja o proximo 
            //se mantem sendo diferente ou igual, se for igual cai no outro if
            //que valida a substring
             if (str1[i + j] != str2[j]) {
                break;
            }
              if (j == len2) {
            return i;
        }
        }
    }
     return -1; 
}

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "world";
    
    int position = minha_substring(str1, str2);
    
    if (position != -1) {
        printf("'%s' encontrada em posição %d em '%s'\n", str2, position, str1);
    } else {
        printf("'%s' não encontrada em '%s'\n", str2, str1);
    }
    
    return 0;
}