#include <stdio.h>

int main(){

    // Receba números até que o usuário digite 0, e calcule a soma total.

    int soma = 0, roblox = 1;

    while (roblox != 0)
    {
        scanf("%d",&roblox);

        soma += roblox;

        if (roblox == 0)
        {
            printf("Soma = %d",soma);
        }
        
    }

}