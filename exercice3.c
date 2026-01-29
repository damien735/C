#include <stdio.h>

int multiplication(int * x, int * y) {
    return *x * *y;
}

int main() {

    int a = 4;
    int b = 5;

    int resultat = multiplication(&a, &b);
    printf("Le resultat de la multiplication est : %d\n", resultat);
    return 0;
}
