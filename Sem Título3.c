#include <stdio.h>

int main() {
    int numero;
    int entradaValida = 0; // Variável de controle

    while (!entradaValida) {
        printf("Digite um numero inteiro: ");

        if (scanf("%d", &numero) == 1) {
            // A leitura foi bem-sucedida, o número é inteiro
            entradaValida = 1; // Define a variável de controle para sair do loop
        } else {
            printf("Entrada invalida. Tente novamente.\n");
            while (getchar() != '\n');
        }
    }

    // O número inteiro válido está armazenado em 'numero'
    printf("Voce digitou: %d\n", numero);

    return 0;
}
