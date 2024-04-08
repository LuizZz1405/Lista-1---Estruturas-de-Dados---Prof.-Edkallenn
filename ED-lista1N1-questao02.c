/*
**    Função : Fatorial duplo
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 03/04/24
**    Observações:
*/

#include <stdio.h>

// Função para calcular o fatorial duplo de um número n
int fatorial_duplo(int n) {
    int resultado = 1;
    for (int i = n; i > 0; i -= 2) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n = 20;
    int fatorial_normal[21];
    int fatorial_duplo[21];
    int diferenca[21];

    // Calcula os fatoriais normais e duplos de 2 a 20
    for (int i = 2; i <= n; i++) {
        fatorial_normal[i] = 1;
        for (int j = i; j > 0; j--) {
            fatorial_normal[i] *= j;
        }
        fatorial_duplo[i] = fatorial_duplo[i];
        diferenca[i] = fatorial_normal[i] - fatorial_duplo[i];
    }

    // Exibe os resultados em uma tabela
    printf("n\tFatorial Normal\tFatorial Duplo\tDiferença\n");
    for (int i = 2; i <= n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i, fatorial_normal[i], fatorial_duplo[i], diferenca[i]);
    }

    return 0;
}
