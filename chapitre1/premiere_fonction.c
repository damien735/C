#include <stdio.h>
#include <stdlib.h>


int triple(int nombre) {

    return 3 * nombre;

}

int main() {
    int Nombre1 = 0;
    int resultat = 0;

    printf("Nombre de triple : ");
    scanf("%d", &Nombre1);

    resultat = triple(Nombre1);
    printf("Le resultat de triple est %d", resultat);
    return 0;

}