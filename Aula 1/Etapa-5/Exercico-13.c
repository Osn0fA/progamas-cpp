#include <stdio.h>

// Calculadora simples: Receba dois números e um operador (+, -, *, /) e execute a operação.

int main(){

    char operador = 'a';
    int num1 = 0, num2 = 0, resultado = 0;

    printf("\n\n########################\n");
    printf("###### CALCULADORA #####\n");
    printf("########################\n\n");

    printf("Numero1 = ");
    scanf("%d",&num1);
    
    printf("\nOperador = ");
    scanf(" %c", &operador);

    printf("\nNumero2 = ");
    scanf("%d",&num2);
   
    //----------------------------> Ignora pfv....

    if (operador == '+')
    {

        resultado = num1 + num2;
    }

    if (operador == '-')
    {
        resultado = num1 - num2;
    }

    if (operador == 'x'|| operador == '*'){

        resultado = num1 * num2;
    }

    if (operador == '/'){

        resultado = num1 / num2;
    
    }
    
    //---------------------------------------------->

    printf("\nObserver a magica MUAHAHAHHAHAHA\n%d %c %d = %d", num1,operador,num2,resultado);

}