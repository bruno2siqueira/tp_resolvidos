/*
 Aula 5 - Estruturas de Dados Homogêneas Unidimensionais – Vetores e Strings
 1- Elabore um programa para ler o nome e o sobrenome de dez pessoas, imprimindo-os no seguinte formato: sobrenome, nome.
*/
#include <stdio.h>

int main()
{
    char nome[5][15], snome[5][15];
    int i;
    while(i<2){
        printf("Nome Completo[%d]: \0",i);
        scanf("%s %s", &nome[i], &snome[i]);
        i++;
    }
    i = 0;
    printf("Resultado {sobrenome\, nome}\0");
    while(i<2){
        printf("\n%s, %s", snome[i], nome[i]);
        i++;
    }
    return 0;

}
