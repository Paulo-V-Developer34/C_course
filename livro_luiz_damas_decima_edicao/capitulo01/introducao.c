#include <stdio.h> //# serve para indicar algo ao compilador //stdio.h é o nome da biblioteca onde .h é a extenção, essa extensão significa "header file", visto que o código em C não está propriamente escrito nele, ao invés disso ele é apenas um indicador destes códigos //devemos fazer essa importação visto que a linguagem C não possui estes comandos por padrão

main()
{ // essa é a função principal do programa, onde o computador procurará onde deve começar a execução

    // printf significa print+format e serve para escrever algo no terminal
    printf("caracter especial para fazer um efeito sonoro \7 ou \a"); // podemos incluir caracteres especiais, como \7, \n, \" entre outros

    // PrinTf("Hello World") //issa operação ocasionaria em um erro, pois a linguagem C é case sensitive
}