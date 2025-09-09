#include <stdio.h>

/// Objetivo qual dos numeros é maior.

int main(){

    int inp1 = 0, inp2 = 0;         //Variaveis

    printf("Vamos comparar dois numeros... De pra mim eles...\n\nNumero 1:");

    scanf("%d",&inp1);

    printf("\n\nNumero 2:");

    scanf("%d",&inp2);

    // Aqui embaixo ele determina quem é maior...

    if (inp1 > inp2)
    {
        printf("%d is bigger than %d",inp1,inp2);
    }

    if (inp2 > inp1)
    {
        printf("%d is bigger than %d",inp2,inp1);
    }
    
}