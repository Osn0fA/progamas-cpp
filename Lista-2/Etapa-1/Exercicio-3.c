#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int v[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        v[i] = valor;
    }
}

int main() {
    int n, valor;
    printf("=== Preencher vetor com valor ===\n");
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    printf("Valor para preencher: ");
    scanf("%d", &valor);

    int *vetor = (int*) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de memória!\n");
        return 1;
    }

    preencherVetor(vetor, n, valor);

    printf("Vetor preenchido: ");
    for (int i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    free(vetor); 
    return 0;
}
