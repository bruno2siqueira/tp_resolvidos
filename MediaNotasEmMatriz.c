//
// Created by Bruno Siqueira on 25/09/2018.
//
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float matriz [2][4];
    float media[2], soma;
    int cont1, cont2;

    for ( cont1 = 0; cont1 < 2; cont1 = cont1 + 1 )
    {
        soma = 0.0f;
        for ( cont2 = 0; cont2 < 4; cont2 = cont2 + 1 )
        {
            printf ("Digite a nota posição %i, %i da matriz:", cont1, cont2 );
            scanf ( "%f", &matriz[cont1][cont2] );
            soma = soma + matriz[cont1][cont2] ;
        }
        media[cont1] = soma / 4.0;
        printf ("A média dos números da linha %d  da matriz é: %f.", cont1, media[cont1]);
    }
    printf("nE a média geral entre todos os números é: %2.2f\n", (media[0]+media[1])/2.0f);

    return 0;
}
