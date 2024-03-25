#include <stdio.h>

int main(){

   printf("Tamanho short int: %lu bytes, %lu bits\n", sizeof(short int), sizeof(short int)*8);
   printf("Tamanho  int: %lu bytes, %lu bits\n", sizeof( int), sizeof( int)*8);
   printf("Tamanho long int: %lu bytes, %lu bits\n", sizeof(long int), sizeof(long int)*8);
   printf("Tamanho long long int: %lu bytes, %lu bits\n", sizeof(long long int), sizeof(long long int)*8);

    return 0;   

    // Tamanho short int: 2 bytes, 16 bits
    // Tamanho  int: 4 bytes, 32 bits
    // Tamanho long int: 8 bytes, 64 bits
    // Tamanho long long int: 8 bytes, 64 bits
}
