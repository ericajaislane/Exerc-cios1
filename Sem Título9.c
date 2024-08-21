#include <stdio.h>

int main() {
    float nota1, nota2, nota3, mediaFinal;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    mediaFinal = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;
    printf("A média final é: %.2f\n", mediaFinal);
    return 0;
}

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float nota1, nota2, nota3, mediaFinal; // Declara variáveis

    printf("Digite a primeira nota: "); // Pede a primeira nota
    scanf("%f", &nota1); // Lê a primeira nota

    printf("Digite a segunda nota: "); // Pede a segunda nota
    scanf("%f", &nota2); // Lê a segunda nota

    printf("Digite a terceira nota: "); // Pede a terceira nota
    scanf("%f", &nota3); // Lê a terceira nota

    mediaFinal = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10; // Calcula a média final ponderada

    printf("A média final é: %.2f\n", mediaFinal); // Mostra a média final

    return 0; // Termina o programa
}


