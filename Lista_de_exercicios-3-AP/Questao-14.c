#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

