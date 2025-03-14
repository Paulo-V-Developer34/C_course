#include <stdio.h>

main()
{
    int a, b, c;   // podemos declarar mais de uma variável de uma só vez
    a = b = c = 5; // podemos fazer várias atribuições de uma só vez

    // vale ressaltar que cada arquitetura pode fazer com que a quantidade de bytes destinados a cada tipo seja diferente! entretanto isso não é tão comum atualmente
    char letter;      // 1 byte
    int num;          // 2 bytes, 3bytes ou até 4bytes dependendo do hardware, mas normalmente é 4bytes
    float floatnum;   // 4 bytes
    double doublenum; // 8 bytes //double também pode ser conhecido como "dupla precisão"

    // para evitar o problema anterior podemos forçar a arquitetura a utilizar a quantidade de bytes que queremos
    short int short_num; // obriga a utilização de 2 bytes
    long int long_num;   // obriga a utilização de 4 bytes

    // temos as variáveis "assinadas" e "não assinadas", as assinadas podem ser negativas enquanto as não assinadas não podem
    unsigned int uns_num;
    signed int sig_num;

    // podemos misturar diversos tipos de especificações de uma variável
    long unsigned int long_uns_num;

    // o sizeof() serve para mostrar qual é a quantidade de bytes que cada tipo ocupa
    printf("O tamando em bytes de um char e\': %d\n", sizeof(char));
    printf("O tamando em bytes de um int e\': %d\n", sizeof(int));
    printf("O tamando em bytes de um float e\': %d\n", sizeof(float));
    printf("O tamando em bytes de um double e\': %d\n", sizeof(double));

    // para recebermos os dados de um valor long, short devemos colocar o "l" para long e "h" para short depois do "%" antes do tipo da variável propriamente dito, como por exemplo um long int ficaria "%ld"
    // no caso de usarmos um valor "unsigned" devemos utilizar o "u", entretanto este deve ser utilizado de forma diferente

    long unsigned int numero_grande; //%lu é a formatação para long unsigned ou long unsigned int

    printf("\nDigite um numero muito grande, entre 1 e 3 bilhoes: ");
    scanf("%lu", &numero_grande);
    printf("\nO numero grande que voce digitou foi: %lu", numero_grande); // note que caso você tente colocar um número maior que isso ele simplismente colocará outro número de acordo com os 4 bytes correspondentes, é quase como se ele simplismente jogasse os demais bits necessários para compor o número gigantesco (maior que 4 bytes) fossem jogados fora
}