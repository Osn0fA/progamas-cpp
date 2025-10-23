#include <stdio.h>

int main() {
    char str[51];
    char *p;
    int vogais = 0;

    printf("Digite uma string (ate 50 caracteres): ");
    
    fgets(str, 51, stdin);

    for (p = str; *p != '\0'; p++) {
        char c = *p;
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            vogais++;
        }
    }

    printf("Numero de vogais: %d\n", vogais);
    
}
