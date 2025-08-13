/// Receba a idade de uma pessoa e transforme em dias e diga a pessoa :)

#include <stdio.h>

int main()
{
    int DiasVida = 0;
    int idadeUsr = 0;

    printf("Olá usuario seja bem-vindo. Por favor me diga sua idade. =)\n\nIdade = ");
    scanf("%d", &idadeUsr);

    printf("Obrigado usuario... Vc tem %d de idade. Parabéns como vc sobreviveu tanto?",idadeUsr);

    DiasVida = idadeUsr * 365;

    printf("Parabens vc sobrevivieu em media de %d dias. Vc tem 14 dias sobrando.", DiasVida);

}