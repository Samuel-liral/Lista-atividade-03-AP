#include <stdio.h>

int main() {
    int N;
    
    printf("Digite um valor para N (maior que 0): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }
    return 0;
}

