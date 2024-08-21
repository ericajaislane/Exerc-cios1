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

Claro! Aqui está o código com comentários simples:

```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int anos, meses, dias, totalDias; // Declara variáveis

    printf("Digite sua idade em anos, meses e dias:\n"); // Pede a idade em anos, meses e dias
    printf("Anos: "); // Pede os anos
    scanf("%d", &anos); // Lê os anos

    printf("Meses: "); // Pede os meses
    scanf("%d", &meses); // Lê os meses

    printf("Dias: "); // Pede os dias
    scanf("%d", &dias); // Lê os dias

    totalDias = anos * 365 + meses * 30 + dias; // Calcula a idade total em dias

    printf("Sua idade em dias é: %d\n", totalDias); // Mostra a idade total em dias

    return 0; // Termina o programa
}
```

Se precisar de mais alguma coisa, é só falar! 😊
