#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, proxNum = 0, marcador = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (proxNum < num) {
        proxNum = fib1 + fib2;
        fib1 = fib2;
        fib2 = proxNum;
    }

    if (proxNum == num) {
        marcador = 1;
    }

    if (marcador == 1) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
