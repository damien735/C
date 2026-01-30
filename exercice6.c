#include <stdio.h>
#include <stdlib.h>

int main() {

    int choixMenu;

    printf("=== Menu ===\n");
    printf("1. Tacos\n");
    printf("2. Burger\n");
    printf("3. Pizza\n");
    printf("4. Kebab\n");
    printf("Votre choix ?\n");

    scanf("%d", &choixMenu);

    switch (choixMenu)
    {
    case 1:
        printf("Vous avez choisi le Tacos");
        break;
    
    case 2:
        printf("Vous avez choisi le Burger");
        break;
    
    case 3:
        printf("Vous avez choisi la Pizza");
        break;

    case 4:
        printf("Vous avez choisi le Kebab");
        break;

    default:
    printf("Vous avez pas choisi");
    }
}