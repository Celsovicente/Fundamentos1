#include <stdio.h>

int main() {
    int numero;
    int entradaValida = 0; // Vari�vel de controle

    while (!entradaValida) {
        printf("Digite um numero inteiro: ");

        if (scanf("%d", &numero) == 1) {
            // A leitura foi bem-sucedida, o n�mero � inteiro
            entradaValida = 1; // Define a vari�vel de controle para sair do loop
        } else {
            printf("Entrada invalida. Tente novamente.\n");
            while (getchar() != '\n');
        }
    }

    // O n�mero inteiro v�lido est� armazenado em 'numero'
    printf("Voce digitou: %d\n", numero);

    return 0;
}
