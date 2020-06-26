#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() { 
    
     
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    
    
     SetConsoleOutputCP(CPAGE_UTF8);
    // imprime o cabeçalho do nosso jogo
    printf("**************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("**************************************\n");

    int numerosecreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d",&chute);
    printf("Seu chute foi %d\n", chute);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    
    // declaração de uma variavel inteiro -> %d
    //printf(" O número %d é o secreto. Não conta pra ninguém!\n", numerosecreto);
}