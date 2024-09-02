#include <stdio.h>

int main() {
    int totalMercadorias;
    float valor, soma = 0;

    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &totalMercadorias);

    for (int i = 0; i < totalMercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i + 1);
        scanf("%f", &valor);
        soma += valor;
    }

    printf("Valor total em estoque: %.2f\n", soma);
    printf("Media de valor das mercadorias: %.2f\n", soma / totalMercadorias);

    return 0;
}

