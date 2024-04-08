/*
**    Função : numeros felizes
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 06/04/24
**    Observações:
*/

#include <stdio.h>
#include <stdbool.h>

// Função para calcular a soma dos quadrados dos dígitos de um número
int soma_quadrados_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}

// Função para verificar se um número é feliz
bool eh_numero_feliz(int n) {
    int visitados[1000] = {0}; // Array para marcar os números visitados

    while (1) {
        if (n == 1) {
            return true;
        }
        if (visitados[n] == 1) {
            return false; // Ciclo infinito, número não é feliz
        }
        visitados[n] = 1;
        n = soma_quadrados_digitos(n);
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    if (eh_numero_feliz(n)) {
        printf("%d é um número feliz.\n", n);
    } else {
        printf("%d não é um número feliz.\n", n);
    }

    return 0;
}
