#include <stdio.h>

int main(){
    int number;
    printf("Inserisci un numero: ");
    scanf("%d", &number);

    // l'inizio della frase rimane sempre uguale, per risparmiare tempo la scrivo qui
    printf("%d diviso 5 ha resto ");
    // una divisione per 5 ha sempre resto compreso tra 0 e 4 (5 / 5 = 0 & 5 / 1 = 1)
    switch(number % 5){
        case 0:
            printf("ZERO");
            break;
        case 1:
            printf("UNO");
            break;
        case 2:
            printf("DUE");
            break;
        case 3:
            printf("TRE");
            break;
        case 4:
            printf("QUATTRO");
            break;
    }

    return 0;
}