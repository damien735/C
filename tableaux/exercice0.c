#include <stdio.h>

void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++)
    printf("La valeur des tableaux est : %d\n", tab[i]);
}

int main() {

    int tab[5] = {1, 2, 3, 4 ,5};

    afficherTableau(tab, 5);

    return 0;

}