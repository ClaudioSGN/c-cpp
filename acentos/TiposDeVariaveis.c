#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Permite o uso de acentos.
    setlocale(LC_ALL, "");

    //Imprime "Ol� Mundo!"
    printf("Ol� mundo! \n");

    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a � = %d \n", a);
    //Scanf serve para ler diretamente do usu�rio
    //%d significa que a vari�vel ser� inteira
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    //Lendo valor quebrado
    float b = 5.5;
    //%f significa que a vari�vel ser� float
    printf("O valor de b � = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    //Lendo letra
    char letra = 't';
    //%c significa que a vari�vel ser� char
    printf("O valor de c � = %c \n", letra);
    fflush(stdin); //fflush serve para que o programa n�o mostre diretamente a letra sem solicitar a altera��o fazendo com que limpe a entrada de buffer principal (stdin)
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);
}
