#include <stdio.h>

int main() {
    int i;
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima e Direita (%d)\n", i);
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= movimentoRainha);

    return 0;
}
