/*
 Created by Bruno Siqueira on 14/09/2018.
 Aula 5 - Estruturas de Dados Homogêneas Unidimensionais – Vetores e Strings
 2- Elabore um programa para ler as notas dos 10 alunos da turma, calcule a média da turma, e calcule
 também quantos alunos tiveram notas abaixo da média, e quantos tiveram notas acima da média.
*/
#include <stdio.h>

int main()
{
    float  nota[10], avr, acc = 0;
    int n, i = 0, top = 0, down = 0;

    printf("Quantas notas deseja informar?");
    scanf("%d", &n);
    while(i < n){
        printf("Nota[%d]: ",i);
        scanf("%f", &nota[i]);
        acc = acc + nota[i];
        i++;
    }
    // calcula a media
    avr = acc/n;
    // percore o vetor para ver a situacao das medias informadas
    i = 0;
    while (i < n){
        if(nota[i] >= avr){
            top++;
        }else
            down++;
        i++;
    }
    printf("----- Resultado -----\n"
           "Media  avr:\t%.2f \n"
           "Acima  avr:\t%d \n"
           "Abaixo avr:\t%d \n", avr, top, down);
    return 0;

}

