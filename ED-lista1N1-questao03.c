/*
**    Função : Numeros amigaveis
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 05/04/24
**    Observações:
*/
#include <stdio.h>

// Função para verificar se dois números são amigáveis
void verificarAmigaveis(int a, int b) {
    int soma_a = 0, soma_b = 0;

    // Calcula a soma dos divisores próprios de 'a'
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            soma_a += i;
            printf("%d ", i);
        }
    }

    // Calcula a soma dos divisores próprios de 'b'
    printf("\nDivisores de b (%d): ", b);
    for (int i = 1; i <= b / 2; i++) {
        if (b % i == 0) {
            soma_b += i;
            printf("%d ", i);
        }
    }

    // Verifica se os números são amigáveis
    if (soma_a == b && soma_b == a) {
        printf("\n%d e %d são um par de números amigáveis.\n", a, b);
    } else {
        printf("\n%d e %d não são um par de números amigáveis.\n", a, b);
    }
}

// Função para encontrar todos os pares de números amigáveis até 'n'
void encontrarAmigaveisAte(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            verificarAmigaveis(i, j);
        }
    }
}

int main() {
    int n;

    printf("Digite um número para encontrar todos os pares de números amigáveis até ele: ");
    scanf("%d", &n);

    encontrarAmigaveisAte(n);

    return 0;
}
