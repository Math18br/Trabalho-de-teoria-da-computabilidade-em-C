#include <stdio.h>

int main() {
    int limite;
    
    printf("Digite o limite da sequ�ncia de Fibonacci: ");
    scanf("%d", &limite);
    
    int i = 0,
    primeiro = 0,
    segundo = 1,
    proximo;
    
    printf("Sequ�ncia de Fibonacci at� %d:\n", limite);
    
    loop:if (primeiro <= limite) {
        printf("%d, ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
        goto loop;
    }
    
    return 0;
}
