#include <stdio.h>

int main(){
int x = 10;
int *px;
    
px = &x;

printf("Valor de x: %d\n", x);  // Valor de x
printf("Endereço de x:%p\n", &x);   //Endereço da memoria da Int x
printf("Valor amarzenado em px (Endereço): %p\n",px);   //E aqui mostra o que esta defenido no ponteiro
printf("Valor apontado por px: %d\n", *px);     // Mostra o que está alocado na memoria
    
return 0;
}