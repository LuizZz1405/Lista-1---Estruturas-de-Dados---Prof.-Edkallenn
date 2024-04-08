/*
**    Função : Numero automorfico
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 05/04/24
**    Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Função para verificar se um número é automórfico
bool eh_numero_automorfico(int n) {
    int quadrado = n * n;
    while (n > 0) {
        if (n % 10 != quadrado % 10) {
            return false;
        }
        n /= 10;
        quadrado /= 10;
    }
    return true;
}

// Função para mostrar todos os números automórficos entre 2 e n
void mostrar_numeros_automorficos(int n) {
    int *automorficos = malloc(sizeof(int)); // Array para armazenar os números automórficos
    int count = 0; // Contador de números automórficos

    for (int i = 2; i <= n; i++) {
        if (eh_numero_automorfico(i)) {
            count++;
            automorficos = realloc(automorficos, count * sizeof(int));
            automorficos[count - 1] = i;
        }
    }

    printf("Números automórficos entre 2 e %d:\n", n);
    for (int i = 0; i < count; i++) {
        printf("%d ", automorficos[i]);
    }
    printf("\n");

    free(automorficos); // Liberar a memória alocada
}

int main() {
    int n;

    printf("Digite um número para encontrar todos os números automórficos até ele: ");
    scanf("%d", &n);

    mostrar_numeros_automorficos(n);

    return 0;
}
