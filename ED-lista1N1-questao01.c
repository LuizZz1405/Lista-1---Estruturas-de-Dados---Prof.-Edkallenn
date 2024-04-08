/*
**    Função : Calcular potências fatoriais
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 03/04/24
**    Observações:
*/

#include <stdio.h>

// Função para calcular a potência fatorial crescente de x elevado a n
int potencia_fatorial_crescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x + i);
    }
    return resultado;
}

// Função para calcular a potência fatorial decrescente de x elevado a n
int potencia_fatorial_decrescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }
    return resultado;
}

int main() {
    int x, n;

    // Tabela para x fixo e variando n de 2 a 10
    x = 5;
    printf("Para x = %d:\n", x);
    printf("n\tPotência Fatorial Crescente\tPotência Fatorial Decrescente\n");
    for (n = 2; n <= 10; n++) {
        printf("%d\t%d\t\t\t\t%d\n", n, potencia_fatorial_crescente(x, n), potencia_fatorial_decrescente(x, n));
    }

    // Tabela para n fixo e variando x de 2 a 10
    n = 3;
    printf("\nPara n = %d:\n", n);
    printf("x\tPotência Fatorial Crescente\tPotência Fatorial Decrescente\n");
    for (x = 2; x <= 10; x++) {
        printf("%d\t%d\t\t\t\t%d\n", x, potencia_fatorial_crescente(x, n), potencia_fatorial_decrescente(x, n));
    }

    return 0;
}
