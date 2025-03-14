#include <stdio.h>

main()
{
    long int n1, n2;

    printf("digite dois numeros: ");

    // o scanf serve para ler dados do terminal
    // ele pode ler mais de 1 dado de uma só vez
    //
    scanf("%d%d", &n1, &n2);

    printf("a soma entre %d e %d e\' %d", n1, n2, n1 + n2);
}
