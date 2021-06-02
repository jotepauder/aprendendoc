#include<stdio.h>

int main() {
    
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual é o seu chute ? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d" , chute);

     
}

//printf("O número %d  é o secreto. Não conta pra ninguém!\n", numerosecreto);
