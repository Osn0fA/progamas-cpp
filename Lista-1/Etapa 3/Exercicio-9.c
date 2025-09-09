#include <stdio.h>

// Objetivo ver se um aluno foi aprovado ou não

int main(){

    // Vamos supor que são duas notas ok?

    int NotaA = 0, NotaB = 0, somatoria = 0, media = 0;

    printf("Me de suas notas arredondadas...\n\nNota 1: ");

    scanf("%d", &NotaA);

    printf("\nNota 2: ");

    scanf("%d", &NotaB);

    somatoria = NotaA + NotaB;

    media = somatoria / 2;

    //-------------------------> Ok feita a media...

    if (media >= 70)
    {
        printf("Voce passou");
    }

    if ( media >= 40 && media <= 69)
    {
        printf("Voce pode fazer o exame");
    }

    if (media < 40)
    {
        printf("Voce Reprovou");
    }
    


}