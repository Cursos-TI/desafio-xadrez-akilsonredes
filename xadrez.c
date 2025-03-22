#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

char EscolhaPeca;
int i = 1;

printf ("***OPÇÕES DE PEÇAS DO XADREZ*** \n");
printf ("Digite (T) para Torre \n");
printf ("Digite (B) para Bispo \n");
printf ("Digite (R) para Rainha \n");
printf ("Digite (C) para Cavalo \n");

printf("Digite a Opção: ");
scanf("%c",&EscolhaPeca);

switch(EscolhaPeca){
    case 'T':
    while (i <= 5) {
        printf("Direita \n");
        i++;
    }
    break;

    case 'B':
    do
    {
        printf("Cima, Direita \n");
        i++;
    } while (i <= 5);
    break;

    case 'R':
    for (i; i <= 8; i++)
    {
        printf("Esquerda \n");
    }
    break;

    case 'C':
    while (i <= 1){
        for (int j = 1; j <= 2; j++){
            printf("cima \n");
        }
        i++;
        printf("direita \n");
    }
    break;
}
    return 0;
}
