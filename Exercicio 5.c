#include <stdio.h>

/// Receba o raio e descubra a circunferencia kk vsf

int main(void)
{

    float raio = 0;
    float PI = 3.14;
    float resultado = 0;

    printf("Insira o Valor do raio para caucular a circunferencia.\n\nValor do Raio: ");
    scanf("%f",&raio);

    resultado = (raio * raio) * PI;

    printf("%.2f",resultado);

}