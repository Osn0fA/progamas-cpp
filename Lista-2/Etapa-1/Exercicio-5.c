#include <stdio.h>

void transposta3x3(int A[3][3], int T[3][3]) {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            T[j][i] = A[i][j];

        }

    }

}

int main() {

    int A[3][3], T[3][3];

    printf("=== Transposta de uma matriz 3x3 ===\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            printf("Elemento [%d][%d]: ", i, j);

            scanf("%d", &A[i][j]);

        }
    }

    transposta3x3(A, T);

    printf("\nMatriz original:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }

    return 0;
}
