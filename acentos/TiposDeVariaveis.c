#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite o uso de acentos.
    setlocale(LC_ALL, "");

    //Imprime "Olá Mundo!"
    printf("Olá mundo! \n");

    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d \n", a);
    //Scanf serve para ler diretamente do usuário
    //%d significa que a variável será inteira
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    //Lendo valor quebrado
    float b = 5.5;
    //%f significa que a variável será float
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    //Lendo letra
    char letra = 't';
    //%c significa que a variável será char
    printf("O valor de c é = %c \n", letra);
    fflush(stdin); //fflush serve para que o programa não mostre diretamente a letra sem solicitar a alteração fazendo com que limpe a entrada de buffer principal (stdin)
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);
}
