#include<stdio.h> // Uma bibloteca do C
#include<locale.h>

int main() { 
    
    setlocale(LC_ALL, "Portuguese");   

    // imprime cabecalho do nosso jogo
    printf("****************************************\n" );
    printf("* Bem vindo ao nosso jogo de adivinhação *\n", 135, 198);
    printf("****************************************\n"); // \n quebralinha

    //variaveis
    int numerosecreto = 42;
    int chute;
    
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);   // para ler no teclado
    //printf("Seu chute foi %d", chute);
}

//printf("O número %d é o secreto. Não conta para ninguém!\n ",numerosecreto); // %d -> Declarando uma variavel em C
// printf("%d %d",numerosecreto,chute);  Declarando duas ou mais variaveis - Argumentos e paramentros 

