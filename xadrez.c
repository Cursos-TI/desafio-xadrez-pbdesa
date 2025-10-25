#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Definindo as variáveis (peças de xadrez)
int torre = 1; 
int bispo = 1; 
int rainha = 1;
int cavalo_vert = 1;
int cavalo_horiz = 1;

int main() {
    printf("Movimentação - Peças de Xadrez\n\n");
        
    // Movimentação da torre - usando loop for
    printf("Movimentação da Torre\n");
    for (torre; torre <= 5; torre++) {
        printf("Direita\n");
    }
    printf("Movimento da Torre concluido.\n\n");

    // Movimentação do bispo - usando loop while
    printf("Movimentação do Bispo\n");
    while (bispo <= 5) {
        printf("Cima\t");
        printf("Direita\n");
        bispo++;
    }
    printf("Movimento do Bispo concluido.\n\n");

    // Movimentação da rainha - usando loop do while
    printf("Movimentação da Rainha\n");
    do {
        printf("Esquerda\n");
        rainha++;
        
    } while (rainha <= 8);
    
    printf("Movimento da Rainha concluido.\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Movimentação do cavalo - usando estruturas de repetição aninhadas
    printf("Movimentação do Cavalo\n"); 
    for (cavalo_horiz; cavalo_horiz <= 1; cavalo_horiz++) {
        while (cavalo_vert <= 2) {
            printf("Baixo\n");
            cavalo_vert++;
        }
        printf("Esquerda\n");
    }

    printf("Movimento do Cavalo concluido.\n\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
