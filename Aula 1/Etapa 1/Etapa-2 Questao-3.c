#include <stdio.h>

int main(void)
{
    
    int resultado = 0;
    int x = 1;

    printf("tabuada do Sexo\n");

    while (x < 11){

        // 2 * x = resultado

        resultado = 2 * x;

        printf(" 2 x %d = %d \n", x, resultado);
        x++;
    }
}