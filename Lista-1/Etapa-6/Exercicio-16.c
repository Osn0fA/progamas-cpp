//Usando vetores de vetores (matriz), estruture e apresente um tabuleiro de xadrez.

#include <stdio.h>
#include <string.h>

int main(){

    int tab[8][8], intercala = -1;

    printf("Um belo tabuleiro de xadrez <3\nJesus me ajudou nessa tem problema?\n\n");

    for(int i = 0; i < 8; i++){

        printf("\n");

        intercala++;

        for(int x = 0; x < 8; x++){

            intercala++;

             if (intercala % 2 == 0){

            tab[i][x] = 0;
    

        }else{

            tab[i][x] = 1;

        }

        printf("|%d| ", tab[i][x]);

        }
        
    }

}