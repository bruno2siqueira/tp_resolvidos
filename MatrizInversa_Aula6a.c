/* Created by Bruno Siqueira on 25/09/2018.

 a) Uma matriz M pode ser transposta em uma matriz N onde o número de linhas/colunas da primeira passa a ser o número de colunas/linhas da segunda.
 Faça um programa que:
- Leia uma matriz M (o usuário deve fornecer a quantidade de linhas e a quantidade de colunas que não deverão exceder 50 linhas e 50 colunas).
- Calcule a transposta N da matriz M.
- Imprima a transposta calculada.

*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{

    int i, j; // contadores
    int l,c;  // tam da matriz que sera informado pelo usuario

    // Dados de input do usuario para saber o tamanho da matriz
    printf("Informe o tamanho da matriz m[linha][coluna]:");
    scanf ("%d %d", &l, &c);
    int m[l][c]; // matriz normal
    int n[c][l]; // matriz transposta

    for (i = 0; i < l; i++ )
    {
        for ( j = 0; j < c; j++ )
        {
            printf ("\nDigite valor matriz[%d][%d]:", i, j );
            scanf ( "%d", &m[i][j] );
            n[c][l]=m[i][j];
        }
    }
    i = j =0;
    for (i = 0; i < l; i++ )
    {
        for ( j = 0; j < c; j++ )
        {
            printf ("\nm[%d][%d]: %d", i, j, m[i][j]);

        }
    }
    printf ("\n");
    i = j =0;
    for (i = 0; i < l; i++ )
    {
        for ( j = 0; j < c; j++ )
        {

            printf ("\nn[%d][%d]: %d", j, i, m[j][i]);
        }
    }
    printf ("\n");
    return 0;
}
