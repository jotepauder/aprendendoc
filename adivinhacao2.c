#include<stdio.h>

int main (){
    
    //imprime cabecalho do nosso jogo
    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    int numerosecreto = 50;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n",chute);

    
    int acertou = (chute == numerosecreto);
   
    if(acertou) {
            printf("Você acertou, parabéns! \n");
            printf("Jogue de novo, você é um bom jogador! \n");
    } 
    
    else {
        
    int maior = chute > numerosecreto;
        if(maior) {
            printf("Seu chute foi maior que o número secreto \n");
        } else {
            printf("Seu chute foi menor que o número secreto \n");
        }
    } 
}