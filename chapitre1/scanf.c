#include <stdio.h>
#include <stdlib.h>

int main() {
    int resultat = 0, valeur1 = 0, valeur2 = 0;

    printf("entrer votre premiere valeur : ");

    scanf("%d", &valeur1);

    printf("entrer votre deuxieme valeur : ");

    scanf("%d", &valeur2);

resultat = valeur1 + valeur2;

    printf("Le resultat est %d + %d = %d\n", valeur1, valeur2, resultat);
    return 0;
}