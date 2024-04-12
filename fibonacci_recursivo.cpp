#include <stdio.h>

void fibonacci(int primeiro, int segundo, int limite) {
    if (primeiro <= limite) {
        printf("%d, ", primeiro);
        fibonacci(segundo, primeiro + segundo, limite);
    }
}

int main() {
    int limite;
    
    printf("Digite o limite da sequência de Fibonacci: ");
    scanf("%d", &limite);
    
    printf("Sequência de Fibonacci até %d:\n", limite);
    fibonacci(0, 1, limite);
    
    return 0;
}

