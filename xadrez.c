#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    printf("Torre: \n");

    // loop para mover a torre 5 casas para a direita.
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");// printf para mostra a direção do movimento.
    }

    printf("\n");

    int bispo;// variável do bispo

    printf("Bispo: \n");

    while (bispo <= 5)// loop para mover o bispo 5 casas na diagonal.
    {
        printf("Diagonal(Cima Direita)\n");// printf para mostra a direção do movimentação.
        bispo++;
    }

    printf("\n");

    int rainha;// variável da rainha.

    printf("Rainha: \n");

    do// loop para mover a rainha 8 casas para a esquerda.
    {
        printf("Esquerda\n");// printf do movimento da rinha.
        rainha++;
    } while (rainha <= 7);
    
    
    
    return 0;
}
