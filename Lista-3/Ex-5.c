#include <stdio.h>

int main() {
    int x = 99;
    int *p = &x;
    int **pp = &p;

    **pp = 123; // alterando valor de x usando pp

    printf("Novo valor de x: %d\n", x);
    return 0;
}
