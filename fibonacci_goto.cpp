#include <stdio.h>

void fibonacci(int n) {
    int i = 0, primeiro = 0, segundo = 1, proximo;
    
    printf("Sequência de Fibonacci até %d:\n", n);
    
loop:
    if (primeiro <= n) {
        printf("%d, ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
        goto loop;
    }
}

int main() {
    int limite;
    
    printf("Digite o limite da sequência de Fibonacci: ");
    scanf("%d", &limite);
    
    fibonacci(limite);
    
    return 0;
}

