#include <stdio.h>

int main() {
    float valor, soma = 0;
    int cont = 0;
    char opcao;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        soma += valor;
        cont++;

        printf("Mais mercadorias (S/N)? ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    printf("Valor total em estoque: %.2f\n", soma);
    printf("Media de valor das merrcadorias: %.2f\n", soma / cont);

    return 0;
}

