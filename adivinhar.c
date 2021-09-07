#include<stdio.h>

int main(){

    int count = 4;
    for (int i = 0; i < count; i++) {
   
        printf("*****************************\n");
        printf("Bem Vindo ao jogo de Adivinhação\n");
        printf("*****************************\n");
        int numeroSecreto = 42;
        int chute; 
        printf("Qual  é o seu chute ?\n");
        scanf("%d", &chute);

        while (chute != numeroSecreto) {
            
        if (chute > numeroSecreto) {
                printf("O seu chute foi maior que o número secreto\n");
                printf("Qual  é o seu chute ?\n");
                scanf("%d", &chute);
            }
            else if (chute < numeroSecreto) {
                printf("O seu número foi menor que o número secreto\n");
                printf("Qual  é o seu chute?\n");
                scanf("%d", &chute);
            }
            break;
        }
    
    }
    // if (chute == numeroSecreto){
    //     printf("Parabéns você acertou !\n");
    // }
    // else if (chute > numeroSecreto) {
    //     printf("O seu chute foi maior que o nímero secreto\n");
    // }
    // else if (chute < numeroSecreto) {
    //     printf("O seu número foi menor que o número secreto\n");
    // }
    
}