#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5, media;

    printf("Digite 5 notas: ");
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Passou\n");
    } else {
        printf("Reprovou\n");
    }

    return 0;
}
