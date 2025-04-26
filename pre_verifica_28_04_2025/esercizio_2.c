#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    // ricordate le librerie! ^^
    int number;
    printf("fino a dove? ");
    scanf("%d", &number);

    // il seme del randomico
    srand(time(NULL));

    // devo partire da 1 e non da 0 - salto un numero, quindi
    // sommo uno al resto ottenuto dalla divisione
    printf("Ecco un numero casuale tra 1 e %d: %d", number, (rand() % number) + 1);

    return 0;
}