#include <stdio.h>

int main() {
    int num1, num2, risultato = 0;


    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);


    for (int i = 0; i < num2; i++) {
        risultato += num1;
    }


    printf("Il prodotto è: %d\n", risultato);

    return 0;
}