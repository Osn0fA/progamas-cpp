#include <stdio.h>
#include <string.h>

//Escreva uma função que receba um vetor de float e seu tamanho e retorne o maior valor armazenado.




int main(){

    float vetor[4], temp;
    int temp2;

    printf("Coloque os valores...\n");

    for(int i = 0; i < 4; i++){
        printf("Valor [%d}:",i);
        scanf("%f",&temp);
        vetor[i] = temp;
    }


    for (int i = 0; i < 4; i++){

        temp2 = i;

        for(int x = 0; x < 4; x++){

            
            if((i = 4) & (vetor[temp2] >= vetor[x])){

                printf("Numero maior = %f",vetor[temp2]);

            }


        }

    }
    
}