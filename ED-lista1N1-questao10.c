/*
**    Função : fibonacci
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 07/04/24
**    Observações:
*/  

#include <stdio.h>
#include <stdlib.h>

// Função para gerar a série de Fibonacci até um máximo dado
int* fibonacci_max(int max) {
    int* fibonacci = (int*) malloc(sizeof(int) * 100); // Alocação de memória inicial
    int i = 0, a = 0, b = 1, next = a + b;

    // Adiciona os primeiros dois termos da série
    fibonacci[i++] = a;
    fibonacci[i++] = b;

    // Gera os termos seguintes até atingir ou ultrapassar max
    while (next <= max) {
        fibonacci[i++] = next;
        a = b;
        b = next;
        next = a + b;
    }

    // Adiciona um marcador de posição especial no final do array
    fibonacci[i] = -1;

    return fibonacci;
}

int main() {
    int max;
    printf("Digite um número inteiro máximo para a série de Fibonacci: ");
    scanf("%d", &max);

    int* fibonacci = fibonacci_max(max);

    printf("Série de Fibonacci até %d:\n", max);
    for (int i = 0; fibonacci[i] != -1; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    free(fibonacci); // Libera a memória alocada

    return 0;
}
