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

// Saber quantos bytes é alocado em cada tipo de variavel pode
// ser um ponto chave.

// A ideia para se encontrar memorias entre duas funções,
// é usando o ponteiro da variavel em outra função.

// Supondo que temos um vertor x[3], poderiamos pensar assim
// Se vetor é inteiro e cada inteiro aloca 4 bytes, 
// x[0] = 00fxd0 logo então x[1] = 00fxd04;

// Com o malloc, calloc, realloc e free, podemos reservar ou limpar
// a memoria em alocação

// ---------------------------------------------------------------------->

/*

    Listas ligadas :    A gente pode ligar listas com outras listas e gerar
        uma listá conectada.
        
    Arvores:    Pensar o codigo como se fosse ramos, que podem ser movidas até
    um certo resultado.
    
    Grafos:    Se trabalha com nós, com varias opções, porem diferentemente, com
    os grafos a gente começa por baixo.
    
    Tabelas hash:   Já e dificil de explicar[...]
    
    
    ----------------------------------------------------------------------

    

*/
