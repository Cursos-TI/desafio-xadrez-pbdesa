#include <stdio.h>

// Desafio de Xadrez - MateCheck - Pablo Francisco de Sa
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Definindo as variáveis (peças de xadrez)
int numtorre, numbispo, numrainha, numcavalo = 1;
int torre, rainha = 1;
int bispo_vert, bispo_horiz = 1; // Variáveis para controle vertical e horizontal do bispo
int cavalo_vert, cavalo_horiz = 1; // Variáveis para controle vertical e horizontal do cavalo

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Função da movimentação da torre
void movimentacaotorre(int numtorre) {
    while (torre < numtorre) {
        printf("Direita\n");
        torre++;
    }
}

// Função da movimentação do bispo
void movimentacaobispo(int numbispo) {
    for (bispo_vert; bispo_vert < numbispo; bispo_vert++) {
        printf("Cima\t");
        bispo_horiz = 1;
        while (bispo_horiz <= 1) {
        printf("Direita\n");
        bispo_horiz++;
        }
    }
}

// Função da movimentação da rainha
void movimentacaorainha(int numrainha) {
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= numrainha);
}

// Função da movimentação do cavalo
void movimentacaocavalo(int numcavalo) {
    for (cavalo_horiz, cavalo_vert; cavalo_horiz <= 1 && cavalo_vert <= 2; cavalo_horiz++){
        while (cavalo_vert <= 2) {
            if (cavalo_vert == 2) {
                // Ao completar as 2 casas para cima, saímos deste loop para o próximo passo (direita).
                break;  
            }
            printf("Cima\t");
            cavalo_vert++;
        }
        printf("Direita\n");
    }
}    

int main() {     
    printf("Movimentação - Peças de Xadrez \n\n");
        
    // Movimentação da torre
    printf("Movimentação da Torre\n");
    movimentacaotorre(5);
    printf("Movimento da Torre concluido.\n\n");

    // Movimentação do bispo
    printf("Movimentação do Bispo\n");
    movimentacaobispo(5);
    printf("Movimento do Bispo concluido.\n\n");

    // Movimentação da rainha
    printf("Movimentação da Rainha\n");
    movimentacaorainha(8);  
    printf("Movimento da Rainha concluido.\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Movimentação do cavalo
    printf("Movimentação do Cavalo\n"); 
    movimentacaocavalo(1);  
    printf("Movimento do Cavalo concluido.\n\n");

    return 0;
}
