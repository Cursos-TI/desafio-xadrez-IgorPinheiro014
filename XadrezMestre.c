#include <stdio.h>

void moverTorre (int casas){
    if (casas > 0) {
        printf("Torre: Direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo (int casas){
    if (casas > 0) {
        printf("Bispo: Cima, Direita\n");
        moverBispo(casas - 1);
    }
}
void moverRainha (int casas){
    if (casas > 0) {
        printf("Rainha: Esquerda\n");
        moverRainha(casas - 1);
    }
}
void moverCavalo (int movimentos){
    if (movimentos > 0) {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo: Cima\n");
        }
        printf("Cavalo: Direita\n");
        moverCavalo(movimentos - 1);
    }
}


int main() {

    moverTorre(5);
    moverBispo(5);
    moverRainha(5);
    moverCavalo(5);


    return 0;
}