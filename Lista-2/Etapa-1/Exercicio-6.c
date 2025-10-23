#include <stdio.h>

int somaDiagonal4x4(int M[4][4]) {
   
    int soma = 0;
   
    for (int i = 0; i < 4; i++) {
        soma += M[i][i];
    }
   
    return soma;
}

int main() {
    int M[4][4];
    
    printf("=== Soma da diagonal principal de uma matriz 4x4 ===\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
    
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
    
        }
    }

    printf("Soma da diagonal principal = %d\n", somaDiagonal4x4(M));
    return 0;
}
