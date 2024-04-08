/*
**    Função : numero armstrong
**    Autor : Luiz Henrique da Silva Ramos
**    Data  : 06/04/24
**    Observações:
*/  

#include <stdio.h>
#include <stdbool.h>

// Função para contar o número de dígitos em um número
int contar_digitos(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Função para verificar se um número é um número de Armstrong
bool eh_numero_armstrong(int n) {
    int num_digitos = contar_digitos(n);
    int soma = 0;
    int original = n;

    while (n != 0) {
        int digito = n % 10;
        soma += pow(digito, num_digitos);
        n /= 10;
    }

    return soma == original;
}

int main() {
    printf("Números de Armstrong entre 1 e 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
