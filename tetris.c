#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    inicializarJogo();
    int opcao;

    do {
        limparTela();
        exibirEstado();

        printf("\n--- Menu Tetris Stack ---\n");
        printf("1. Jogar peca da frente\n");
        printf("2. Reservar peca da frente\n");
        printf("3. Usar peca reservada\n");
        printf("4. Trocar peca (Fila <-> Pilha)\n");
        printf("5. Desfazer ultima jogada\n");
        printf("6. Inverter Fila com Pilha\n");
        printf("0. Sair\n");
        printf("---------------------------\n");
        printf("Escolha uma acao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: jogarPeca(); break;
            case 2: reservarPeca(); break;
            case 3: usarPecaReservada(); break;
            case 4: trocarPeca(); break;
            case 5: desfazerUltimaJogada(); break;
            case 6: inverterFilaComPilha(); break;
            case 0: printf("\nSaindo do jogo. Ate a proxima!\n"); break;
            default: printf("\nOpcao invalida!\n"); break;
        }

        if (opcao != 0) {
            pressioneEnterParaContinuar();
        }

    } while (opcao != 0);

    return 0;
}


