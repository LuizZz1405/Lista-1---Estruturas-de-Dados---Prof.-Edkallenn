/*
**    Função : 
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 07/04/24
**    Observações:
*/

#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um array é uma permutação circular de outro
int permutacao_circular(int* array1, int* array2, int tamanho) {
    int i, j;
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            if (array1[j] != array2[(i + j) % tamanho]) {
                break;
            }
        }
        if (j == tamanho) {
            return 1; // Encontrou uma permutação circular
        }
    }
    return 0; // Não encontrou uma permutação circular
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    int* array1 = (int*)malloc(sizeof(int) * tamanho);
    int* array2 = (int*)malloc(sizeof(int) * tamanho);

    printf("Digite os elementos do primeiro array: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Digite os elementos do segundo array: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array2[i]);
    }

    int resultado = permutacao_circular(array1, array2, tamanho);
    if (resultado == 1) {
        printf("O segundo array é uma permutação circular do primeiro.\n");
    } else {
        printf("O segundo array NÃO é uma permutação circular do primeiro.\n");
    }

    free(array1);
    free(array2);

    return 0;
}
