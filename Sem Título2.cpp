#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("A área do retângulo é: %.2f\n", area);
    return 0;
}



#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float base, altura, area; // Declara variáveis

    printf("Digite a base do retângulo: "); // Pede a base
    scanf("%f", &base); // Lê a base

    printf("Digite a altura do retângulo: "); // Pede a altura
    scanf("%f", &altura); // Lê a altura

    area = base * altura; // Calcula a área

    printf("A área do retângulo é: %.2f\n", area); // Mostra a área

    return 0; // Termina o programa
}

