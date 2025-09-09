#include <stdio.h>
#include <string.h>

//Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne a soma de todos os elementos. 
//No main, peça para o usuário digitar os elementos do vetor e exiba o resultado. 

int soma(int *x, int *y){

    int resultado = 0;

    resultado =  *x + *y;
    
    printf("\nSeu resultado %d", resultado);

    return 0;
}

int main(){

    int a, b;

    printf("Vamos fazer uma pequena soma: \n");

    printf("Variavel 1: ");
    scanf("%d", &a);

    //--------------------------

    printf("\nVariavel 2: ");
    scanf("%d", &b);

    soma(&a,&b);

    printf("\n\nProfessor min de 100 reais");

    return 0;
}