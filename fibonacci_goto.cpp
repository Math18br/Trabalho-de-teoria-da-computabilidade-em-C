#include <stdio.h>

void fibonacci(int n) {
    int i = 0, primeiro = 0, segundo = 1, proximo;
    
    printf("Sequ�ncia de Fibonacci at� %d:\n", n);
    
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
    
    printf("Digite o limite da sequ�ncia de Fibonacci: ");
    scanf("%d", &limite);
    
    fibonacci(limite);
    
    return 0;
}

