#include <stdio.h>

int main() {
    // Movimentação da Torre
    int casasTorre = 5; // número de casas para movimentar
    printf("Movimentação da Torre (para a Direita):\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita - casa %d\n", i);
    }
    printf("\n");

    // Movimentação do Bispo
    int casasBispo = 5; // número de casas para movimentar
    int contadorBispo = 1;

    printf("Movimentação do Bispo (Diagonal para Cima e Direita):\n");
    while(contadorBispo <= casasBispo) {
        printf("Cima, Direita - casa %d\n", contadorBispo);
        contadorBispo++;
    }
    printf("\n");

    // Movimentação da Rainha
    int casasRainha = 8; // número de casas para movimentar
    int contadorRainha = 1;

    printf("Movimentação da Rainha (para a Esquerda):\n");
    do {
        printf("Esquerda - casa %d\n", contadorRainha);
        contadorRainha++;
    } while(contadorRainha <= casasRainha);
    
    return 0;
}
