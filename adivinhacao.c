#include<stdio.h> // Uma bibloteca do C
#include<locale.h>
#include<windows.h>
//#include <stdlib.h>

int main() { 
    
    // imprime cabecalho do nosso jogo
    //setlocale(LC_ALL,"portuguese-brazilian");
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    setlocale(LC_ALL, "portuguese");
    printf("****************************************\n" );
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("****************************************\n"); // \n quebralinha

    //variaveis
    int numerosecreto = 42;
    int chute;
    
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);   // para ler no teclado
    printf("Seu chute foi %d", chute);

     SetConsoleOutputCP(CPAGE_DEFAULT);
}

//printf("O número %d é o secreto. Não conta para ninguém!\n ",numerosecreto); // %d -> Declarando uma variavel em C
// printf("%d %d",numerosecreto,chute);  Declarando duas ou mais variaveis - Argumentos e paramentros 

