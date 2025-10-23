#include <stdio.h>
#include <stdlib.h>

void lerVetor(float v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }
}

float mediaVetor(float v[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++)
        soma += v[i];
    return soma / n;
}

void imprimeAcimaMedia(float v[], int n, float media) {
    printf("Valores acima da média (%.2f): ", media);
    for (int i = 0; i < n; i++) {
        if (v[i] > media)
            printf("%.2f ", v[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("=== Vetor e Funções Combinadas ===\n");
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    float *v = (float*) malloc(n * sizeof(float));
    if (v == NULL) {
        printf("Erro: memória insuficiente!\n");
        return 1;
    }

    lerVetor(v, n);

    float med = mediaVetor(v, n);
    imprimeAcimaMedia(v, n, med);

    free(v);

    return 0;
}
