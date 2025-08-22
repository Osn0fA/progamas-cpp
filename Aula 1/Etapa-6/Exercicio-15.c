#include <stdio.h>
#include <string.h>

// Ok precisamos de uma nova biblia.... jk...

int main(){

    char frase[50];

    printf("Frase normal\n--> ");

    fgets(frase,50,stdin);

    int inicio = 0, fim = strlen(frase) - 1;     // funçao  strlen ve o tamanho e quais bytes estão ocupados e só computa eles
    char temp; //um char temporaio

    while (inicio < fim)
    {
        temp = frase[inicio];       
        frase[inicio]=frase[fim]; /// Guarda o primmeiro caractere na primeira posição em temp
        frase[fim] = temp;        /// primeiro caractere = ultimo caracterw
                                  /// fim da frase fica com o primeiro caractere
        inicio++;
        fim--;                    // alimentador...
    }
    
    printf("\n\nFrase invertida[...]\n-->");

    printf("%s",frase);
    
}