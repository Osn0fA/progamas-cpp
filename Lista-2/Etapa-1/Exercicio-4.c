#include <stdio.h>

int somaMatriz3x3(int m[3][3]) {

    int soma = 0;
    
    for (int i = 0; i < 3; i++) {
    
        for (int j = 0; j < 3; j++) {
    
            soma += m[i][j];
    
        }
    }
    
    return soma;
}

int main() {
    
    int matriz[3][3];
    
    printf("=== Soma dos elementos de uma matriz 3x3 ===\n");

    for (int i = 0; i < 3; i++) {
    
        for (int j = 0; j < 3; j++) {
    
            printf("Elemento [%d][%d]: ", i, j);
    
            scanf("%d", &matriz[i][j]);
    
        }
    }

    printf("Soma dos elementos = %d\n", somaMatriz3x3(matriz));
    
    return 0;
}
