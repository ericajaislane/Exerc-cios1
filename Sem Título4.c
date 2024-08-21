#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percBrancos, percNulos, percValidos;
    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);
    percBrancos = (votosBrancos / (float)totalEleitores) * 100;
    percNulos = (votosNulos / (float)totalEleitores) * 100;
    percValidos = (votosValidos / (float)totalEleitores) * 100;
    printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos válidos: %.2f%%\n", percValidos);
    return 0;
}

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos; // Declara variáveis inteiras
    float percBrancos, percNulos, percValidos; // Declara variáveis de ponto flutuante

    printf("Digite o número total de eleitores: "); // Pede o número total de eleitores
    scanf("%d", &totalEleitores); // Lê o número total de eleitores

    printf("Digite o número de votos brancos: "); // Pede o número de votos brancos
    scanf("%d", &votosBrancos); // Lê o número de votos brancos

    printf("Digite o número de votos nulos: "); // Pede o número de votos nulos
    scanf("%d", &votosNulos); // Lê o número de votos nulos

    printf("Digite o número de votos válidos: "); // Pede o número de votos válidos
    scanf("%d", &votosValidos); // Lê o número de votos válidos

    percBrancos = (votosBrancos / (float)totalEleitores) * 100; // Calcula o percentual de votos brancos
    percNulos = (votosNulos / (float)totalEleitores) * 100; // Calcula o percentual de votos nulos
    percValidos = (votosValidos / (float)totalEleitores) * 100; // Calcula o percentual de votos válidos

    printf("Percentual de votos brancos: %.2f%%\n", percBrancos); // Mostra o percentual de votos brancos
    printf("Percentual de votos nulos: %.2f%%\n", percNulos); // Mostra o percentual de votos nulos
    printf("Percentual de votos válidos: %.2f%%\n", percValidos); // Mostra o percentual de votos válidos

    return 0; // Termina o programa
}


