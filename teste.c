#include<stdio.h>
#include<locale.h>
#include<windows.h>

main(){
    
    //UINT CPAGE_UTF8 = 65001;
    //UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    //faltsetlocale(LC_ALL, "portuguese");
    
    SetConsoleOutputCP(CPAGE_UTF8);
    
    printf("****************************************\n" );
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("****************************************\n");


    SetConsoleOutputCP(CPAGE_DEFAULT);
} 