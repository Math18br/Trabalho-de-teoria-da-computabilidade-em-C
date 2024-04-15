#include <stdio.h>

void fibonacci(int n) {
    
}

int main() {
    int limite;
    
    printf("Digite o limite da sequência de Fibonacci: ");
    scanf("%d", &limite);
    
    int i,
    primeiro = 0,
    segundo = 1,
    proximo;
    
    printf("Sequência de Fibonacci até %d:\n", limite);
    
    for (i = 0; primeiro <= limite; i++) {
        printf("%d, ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }
    
    return 0;
}

