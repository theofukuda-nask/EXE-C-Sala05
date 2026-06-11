#include <stdio.h>

int main() {
    char nome[50];
    int numero;

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 15) {
        printf("SESI %s\n", nome);
    } else {
        printf("SENAI %s\n", nome);
    }

    return 0;
}
