#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("O antecessor de %d é %d\n", valor, valor - 1);
    return 0;
}

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int valor; // Declara a variável 'valor'

    printf("Digite um valor: "); // Pede ao usuário para digitar um valor
    scanf("%d", &valor); // Lê o valor digitado pelo usuário

    printf("O antecessor de %d é %d\n", valor, valor - 1); // Mostra o antecessor do valor digitado

    return 0; // Termina o programa
}




