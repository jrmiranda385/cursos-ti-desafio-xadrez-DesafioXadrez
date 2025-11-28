#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// função de movimentaçao do bispo
void moveBispo(int casas){
    if (casas > 0){
        printf("Frente\n");
        printf("Direita\n");
        moveBispo(casas -1);
    }
}

// função de movimentaçao da torre
void moveTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moveTorre(casas -1);
    }
}

// função de movimentaçao da Rainha
void moveRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moveRainha(casas -1);
    }
}

// função de movimentaçao do Cavalo
void moveCavalo(){
    int movimentaCavalo = 1; // váriavel para controlar o movimento em L
    while (movimentaCavalo--)
        {
            for (int i = 0; i < 2; i++){
                printf("Cima\n");
            }
            printf("Direita\n");
        }
}

int main(){
    char opcao;

    printf("**  Movimentação das Peças de Xadrez - Nível Mestre **\n\n");

    printf("** Escolha uma peça do Jogo **\n");
    printf("B - Bispo\n");
    printf("T - Torre\n");
    printf("R - Rainha\n");
    printf("L - Cavalo\n");

    printf("Opção [B,T,R,L]: ");
    scanf(" %c", &opcao);

    printf("\n");

    switch (opcao)
    {
    case 'B':
        /* Escolheu o bispo */
        printf("Movimentação do Bispo\n");
        moveBispo(5);
        printf("\n");
        break;

    case 'T':
        printf("Movimentação da Torre\n");
        moveTorre(5);
        printf("\n");
        break;

    case 'R':
        printf("Movimentação da Rainha\n");
        moveRainha(8);
        printf("\n");
        break;

    case 'L':
        printf("Movimentação do Cavalo\n");
        moveCavalo();
        break;
    default:
        printf("Opção Inválida para esse jogo! Válido somente (B - T - R - C)!\n");

        break;
    }

return 0;
}



//int main() {
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

//    return 0;
//}
