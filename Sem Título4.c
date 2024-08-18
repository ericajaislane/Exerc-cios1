#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percBrancos, percNulos, percValidos;
    printf("Digite o n�mero total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o n�mero de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o n�mero de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o n�mero de votos v�lidos: ");
    scanf("%d", &votosValidos);
    percBrancos = (votosBrancos / (float)totalEleitores) * 100;
    percNulos = (votosNulos / (float)totalEleitores) * 100;
    percValidos = (votosValidos / (float)totalEleitores) * 100;
    printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos v�lidos: %.2f%%\n", percValidos);
    return 0;
}

