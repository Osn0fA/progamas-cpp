// Receba 2 numeros inteiros e faça todos os tipos de operação;

#include <stdio.h>

int main()
{
    int resultado = 0;
    int numeroA = 0;
    int numeroB = 0;

    printf("Por favor me de 2 numeros decimais...\n\n");
    printf("Variavel A =");
    scanf("%d", &numeroA);
    printf("\nVariavel B = ");
    scanf("%d", &numeroB);

    resultado = numeroA + numeroB;

    printf("Resultado de %d + %d = %d\n\n",numeroA,numeroB,resultado);

    resultado = numeroA - numeroB;

    printf("Resultado de %d - %d = %d\n\n",numeroA,numeroB,resultado);

        resultado = numeroA * numeroB;

    printf("Resultado de %d x %d = %d\n\n",numeroA,numeroB,resultado);

        resultado = numeroA / numeroB;

    printf("Resultado de %d / %d = %d\n\n",numeroA,numeroB,resultado);

    return 0;
}
