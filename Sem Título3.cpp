#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;
    printf("Digite sua idade em anos, meses e dias:\n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);
    totalDias = anos * 365 + meses * 30 + dias;
    printf("Sua idade em dias é: %d\n", totalDias);
    return 0;
}

