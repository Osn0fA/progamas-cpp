#include <stdio.h>

int main()
{

    int x = 42;
    int *p = &x;
    int **pp = &p;
    
    printf("Valor de x: %d\n",x);
    printf("Endereço de x: %p\n", &x);
    printf("Endereço de p (Endereço de x): %p\n",p);
    printf("Endereço de *p (valor de x): %d\n",*p);
    printf("Endereço de pp (Endereço de p): %p\n",pp);
    printf("Endereço de pp (Conteudo de p): %p\n",*pp);
    printf("Endereço de pp (conteudo de x): %d\n",**pp);
    

}
