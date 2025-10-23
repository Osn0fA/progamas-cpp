
#include <stdio.h>

int main()
{
    int numeros[5] = {10,20,30,40,50};  // Uma vector
    int *p = numeros; // Ponteiro que inicalme idica o que há no numeros[0]
    
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d | via ponteiro: %d\n",
        i, numeros[i], *(p+i)); // No endereço aumenta + 4 bytes por causa do inteiro
                                // E o 
        
    }
    return 0;

}
