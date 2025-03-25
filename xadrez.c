#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

void  moverTorre (int casasT){
    if (casasT > 0){
    printf("Direita \n");
    moverTorre (casasT - 1);
}}
void   moverBispo (int casasB){
    if (casasB > 0){
        printf ("Cima, Direita \n");
        moverBispo (casasB - 1);
        }}
void    moverRainha (int casasR){
    if (casasR > 0){
        printf("Esquerda \n");
        moverRainha (casasR -1);
    }}

int main() {
    

char EscolhaPeca;
int i = 1, i2;

printf ("***OPÇÕES DE PEÇAS DO XADREZ*** \n");
printf ("Digite (T) para Torre \n");
printf ("Digite (B) para Bispo \n");
printf ("Digite (R) para Rainha \n");
printf ("Digite (C) para Cavalo \n");

printf("Digite a Opção: ");
scanf("%c",&EscolhaPeca);

switch(EscolhaPeca){
    case 'T':
        
    moverTorre (5);
   
    /*while (i <= 5) {
        printf("Direita \n");
        i++;
    }*/
    
    break;

    case 'B':
  
    moverBispo (5);
  
    /*do
    {
        printf("Cima, Direita \n");
        i++;
    } while (i <= 5);*/

    break;

    case 'R':
    
    moverRainha (8);

    /*for (i; i <= 8; i++)
    {
        printf("Esquerda \n");
    }*/
    
    break;

    case 'C':
    
    printf ("Digite o número de jogadas: ");
    scanf ("%d", &i2);
    printf("\n");

    while (i <= i2){
        for (int j = 1; j <= 2; j++){
            printf("cima \n");
        }
        i++;
        printf("direita \n");
        printf("\n");
    }
    break;
}
    return 0;
}
