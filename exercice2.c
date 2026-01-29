#include <stdio.h>

int main() {

    int a = 5;
    int * p = &a;

    printf("Valeur de a : %d\n", a);
    printf("Adresse de a : %p\n", &p);
    printf("La valeur est : %d\n", *p);

    *p = 15;
    printf("Nouvelle valeur de a : %d\n", a);
    return 0;
}