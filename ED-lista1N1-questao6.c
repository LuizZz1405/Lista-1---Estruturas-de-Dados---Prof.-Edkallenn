/*
**    Função : Carmichael
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 06/04/24
**    Observações:
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Função para verificar se dois números são coprimos
bool sao_coprimos(int a, int b) {
    for (int i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para verificar se um número é primo
bool eh_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para verificar se um número é um número de Carmichael
bool eh_numero_carmichael(int n) {
    if (eh_primo(n)) {
        return false;
    }

    for (int a = 2; a < n; a++) {
        if (sao_coprimos(a, n) && (int)pow(a, n) % n != a) {
            return false;
        }
    }

    return true;
}

// Função para exibir todos os números de Carmichael de 2 até n
void exibir_numeros_carmichael(int n) {
    printf("Números de Carmichael de 2 até %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (eh_numero_carmichael(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    exibir_numeros_carmichael(n);

    return 0;
}

