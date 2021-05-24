#include <stdio.h>

void rectangle_volume() {
    int a, b, area;

    system("cls||clear");
    printf("Dane prostokata:\n");
    printf("1 bok: ");
    scanf("%d", &a);
    printf("2 bok: ");
    scanf("%d", &b);
    system("cls||clear");
    printf("Sike\n\n");
}

void cuboid_volume() {
    int a, b, h, volume = 0;

    system("cls||clear");
    printf("Dane prostopadloscianu:\n");
    printf("1 bok: ");
    scanf("%d", &a);
    printf("2 bok: ");
    scanf("%d", &b);
    printf("Wysokosc: ");
    scanf("%d", &h);

    if (a <=0 || b <=0 || h <= 0) {
        system("cls||clear");
        printf("Nieprawidlowe dane");
    } else {
        volume = a * b * h;
        system("cls||clear");
        printf("Pole prostopadloscianu %d x %d x %d, wynosi: %d\n\n", a, b, h, volume);
    }
}