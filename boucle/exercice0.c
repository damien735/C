#include <stdio.h>

int main() {

   int somme = 0;

for (int i = 1; i <= 10; i++) {
    somme = somme + i;
}

printf("Somme = %d\n", somme);
return 0;
}