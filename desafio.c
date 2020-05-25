#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>    


int main () {

// variaveis
int x;
int y;
//int valor;
    
    printf("Escreva o valor de x: ");
    scanf("%d", &x);
    
    printf("Escreva o valor de y: ");
    scanf("%d", &y);

    int m = x * y;
    printf("A multiplicação de %d por %d é igual a %d\n", x,y,m);


}