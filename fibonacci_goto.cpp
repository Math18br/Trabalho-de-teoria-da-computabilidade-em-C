#include <stdio.h>

int main() {
    int limite;
    
    printf("Digite o limite da sequência de Fibonacci: ");
    scanf("%d", &limite);
    
    int i = 0,
    primeiro = 0,
    segundo = 1,
    proximo;
    
    printf("Sequência de Fibonacci até %d:\n", limite);
    
    loop:if (primeiro <= limite) {
        printf("%d, ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
        goto loop;
    }
    
    return 0;
}
