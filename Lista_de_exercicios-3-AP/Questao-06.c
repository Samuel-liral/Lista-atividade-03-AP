#include <stdio.h>

int main() {
    float nota1, nota2;
    char opcao;

    do {
        do {
            printf("Digite a nota da primeira avaliacao (0 a 10): ");
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Digite a nota da segunda avaliacao (0 a 10): ");
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 10);

        printf("Media: %.2f\n", (nota1 + nota2) / 2);

        printf("Novo calculo (S/N)? ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}

