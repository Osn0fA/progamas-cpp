#include <stdio.h> 

void dobrar(int *n){
    
    *n = *n * 2;
    
}

// Jesus expilcar isso é uma merda[...]
/* 
    Esse (*) ele define como endereço de memoria no caso ponteiro.
    O que acontece é que quando nós &variavel nós damos a locação da memoria
    E então no *n ele altera a propia memoria.
*/

int main(){
    
    int valor = 5;
    
    printf("Antes: %d\n", valor);
    
    //---------------------------
    
    dobrar(&valor);
    printf("Depois: %d\n", valor);

    return 0;
    
}