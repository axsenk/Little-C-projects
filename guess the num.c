#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int nombreSecret = rand() % 100 + 1;
    int tentative;
    int essais = 0;

    while (1) {  // Boucle infinie (on sort avec 'break')
        printf("Proposition : ");
        scanf("%d", &tentative);
        essais++;

        if (tentative < nombreSecret) {
            printf("Trop petit !\n");
        } else if (tentative > nombreSecret) {
            printf("Trop grand !\n");
        } else {
            printf("Gagné en %d essais !\n", essais);
            break;  // Sort de la boucle
        }
    }
    return 0;
}
