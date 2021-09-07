#include<stdio.h>

int main() {
    printf("*****************************************\n");
    printf("Jogo de estratégia mobile\n");
    printf("*****************************************\n");

    int numero = 42;
    int valor;
    printf("o numero %d é a resposta para todo o mundo !\n", numero);
    printf("Você concorda com isso ?\n Se sim digite 1, se não digite 2\n");
    scanf("%d", &valor);
    if (valor == 1)
    {
        printf("Parabéns, você leu o livro\n");
    }
    else
    {
        printf("Que pena, acho que vocẽ não leu o livro ainda!\n");
    }
    

    return 0;
}