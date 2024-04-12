#include <stdio.h>

void fibonacci(int primeiro, int segundo, int limite) {
    if (primeiro <= limite) {
        printf("%d, ", primeiro);
        fibonacci(segundo, primeiro + segundo, limite);
    }
}

int main() {
    int limite;
    
    printf("Digite o limite da sequ�ncia de Fibonacci: ");
    scanf("%d", &limite);
    
    printf("Sequ�ncia de Fibonacci at� %d:\n", limite);
    fibonacci(0, 1, limite);
    
    return 0;
}

