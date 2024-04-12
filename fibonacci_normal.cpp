#include <stdio.h>

void fibonacci(int n) {
    int i, primeiro = 0, segundo = 1, proximo;
    
    printf("Sequência de Fibonacci até %d:\n", n);
    
    for (i = 0; primeiro <= n; i++) {
        printf("%d, ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
}

int main() {
    int limite;
    
    printf("Digite o limite da sequência de Fibonacci: ");
    scanf("%d", &limite);
    
    fibonacci(limite);
    
    return 0;
}

