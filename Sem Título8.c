#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("A temperatura em Celsius é: %.2f\n", celsius);
    return 0;
}

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float fahrenheit, celsius; // Declara variáveis

    printf("Digite a temperatura em Fahrenheit: "); // Pede a temperatura em Fahrenheit
    scanf("%f", &fahrenheit); // Lê a temperatura em Fahrenheit

    celsius = (fahrenheit - 32) * 5 / 9; // Converte para Celsius

    printf("A temperatura em Celsius é: %.2f\n", celsius); // Mostra a temperatura em Celsius

    return 0; // Termina o programa
}
