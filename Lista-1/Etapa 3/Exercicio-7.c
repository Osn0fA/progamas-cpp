#include <stdio.h>

// Objetivo fazer verificação de um numero pra saber se é possitivo ou negativo

int main(){

    int numInput = 0;
    
    scanf("%d",&numInput);

    if (numInput < 0){

        printf("\n%d is negativo",numInput);

    }

    if (numInput > 0){

        printf("\n%d is positivo",numInput);

    } 
    if (numInput == 0){

        printf("\n%d is um valor nulo(zero)",numInput);

    }

}