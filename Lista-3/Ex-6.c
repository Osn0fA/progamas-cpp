#include <stdio.h>
#include <stdlib.h>

int maiorValor(int *vet, int tamanho) {
    int maior = *vet;
    for (int i = 1; i < tamanho; i++) {
        if (*(vet + i) > maior) {
            maior = *(vet + i);
        }
    }
    return maior;
}

int main() {
    int n;
    int *vetor;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", vetor + i);
    }

    int maior = maiorValor(vetor, n);
    printf("Maior valor: %d\n", maior);

    free(vetor);
    return 0;
}
