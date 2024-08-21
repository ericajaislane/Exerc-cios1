#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, comissaoPorCarro, salarioFinal;
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite a comissão por carro vendido: ");
    scanf("%f", &comissaoPorCarro);
    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorTotalVendas * 0.05);
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);
    return 0;
}

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float custoFabrica, custoFinal; // Declara variáveis

    printf("Digite o custo de fábrica do carro: "); // Pede o custo de fábrica
    scanf("%f", &custoFabrica); // Lê o custo de fábrica

    custoFinal = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45); // Calcula o custo final

    printf("O custo final ao consumidor é: %.2f\n", custoFinal); // Mostra o custo final

    return 0; // Termina o programa
}


