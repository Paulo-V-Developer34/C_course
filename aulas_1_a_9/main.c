#define ex2 // o #define serve para eu escolher qual programa o compilador deve compilar
#include "stdio.h"

#ifdef ex1 // mostra quais são os programas disponíveis para serem compilados
int main(int argc, char const *argv[])
{
    printf("Hello World");
    return 0;
}
#endif

#ifdef ex2

int main(int argc, char const *argv[])
{
    // declarando a variável
    char c;

    printf("digite um caracter: \n");

    // pegando os dados do usuário
    scanf("%c", &c);

    // observe o uso da interpolação (ou template strings) no printf()
    printf("o caracter digitado foi: \n%c", c);

    // este comando será feito apenas para que o programa não termine sem que o usuário queira
    char ch;

    printf("digite qualquer tecla para finalizar o programa");

    scanf("%c", &ch);

    return 0;
}

#endif