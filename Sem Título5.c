#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);
    printf("O novo salário é: %.2f\n", novoSalario);
    return 0;
}

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float salarioAtual, percentualReajuste, novoSalario; // Declara variáveis

    printf("Digite o salário atual: "); // Pede o salário atual
    scanf("%f", &salarioAtual); // Lê o salário atual

    printf("Digite o percentual de reajuste: "); // Pede o percentual de reajuste
    scanf("%f", &percentualReajuste); // Lê o percentual de reajuste

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100); // Calcula o novo salário

    printf("O novo salário é: %.2f\n", novoSalario); // Mostra o novo salário

    return 0; // Termina o programa
}


