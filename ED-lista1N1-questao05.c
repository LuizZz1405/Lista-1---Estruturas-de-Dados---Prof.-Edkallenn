/*
**    Função : Soma de fatoriais inversos
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 05/04/24
**    Observações:
*/

#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

// Função para calcular a soma dos fatoriais inversos até o termo n
double soma_fatoriais_inversos(int n) {
    double soma = 0.0;

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / fatorial(i);
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);

    double resultado = soma_fatoriais_inversos(n);

    printf("A soma dos fatoriais inversos até o termo %d é: %.6f\n", n, resultado);

    return 0;
}
