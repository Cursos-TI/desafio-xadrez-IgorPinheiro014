#include <stdio.h>
int main() {
    int bispo = 1, rainha = 1, torre = 1, movimentoCompleto = 1; //Váriaveis para controle dos loops

        for (torre = 1; torre <= 5; torre++){ //Loop para a torre
            printf("Torre: Direita\n");//Imprime a ação da torre
        }
            while (bispo <= 5){  //loop para o bispo
            printf("Bispo: Cima, Direita\n"); //Imprime a ação do bispo
                bispo++;
        }
            do {
                printf ("Rainha: Esquerda\n"); //imprime a ação da rainha
                rainha++;
            } while (rainha <= 8); //Loop para a rainha

                while (movimentoCompleto--){
                    for (int i = 0; i < 2 ; i ++)
                    {
                        printf("Cavalo: Baixo\n");
                    }
                     printf("Cavalo: Esquerda\n");
                    }
    return 0;
}