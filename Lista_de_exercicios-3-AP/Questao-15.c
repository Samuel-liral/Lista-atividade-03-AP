#include <stdio.h>

int main() {
    int soma = 0, cont = 0;

    for (int i = 15; i <= 100; i++) {
        soma += i;
        cont++;
    }

    printf("Media aritmetica: %.2f\n", (float)soma / cont);
    return 0;
}

