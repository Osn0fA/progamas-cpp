#include <stdio.h>

int main()
{
    //​​Conversor de temperaturas (C ↔ F): escolha do tipo de conversão com if. 

    char opção = 'q';

    printf("Menu...\nPor favor escolha sua conversão[...]\n");

    printf("A) Celsius ---> Farehaint\n");

    printf("B) Farehanit ---> Celsius\n");

    scanf(" %c",&opção);

    if (opção == 'A' || opção == 'a'){

        int celsius = 0, fahrenheit = 0;

        printf("\n\n---> Coloque sua temperatura em Celsius aqui[...]\n\n--> ");

        scanf("%d",&celsius);

        fahrenheit = celsius * 1.8 + 32;

        printf("\n\n Sua temperatura %d e igual a %d.",celsius,fahrenheit);

    }

    
    if (opção == 'B' || opção == 'b'){

        int celsius = 0, fahrenheit = 0;

        printf("\n\n---> Coloque sua temperatura em Fahrenheit aqui[...]\n\n--> ");

        scanf("%d",&fahrenheit);

        celsius = fahrenheit - 32;
        celsius = celsius/1.8;

        printf("\n\n Sua temperatura %d e igual a %d.",fahrenheit,celsius);
        
    }
    
}