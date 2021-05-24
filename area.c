#include <stdio.h>

void rectangle_area() {
    int a, b, area;

    system("cls||clear");
    printf("Dane prostokata:\n");
    printf("1 bok: ");
    scanf("%d", &a);
    printf("2 bok: ");
    scanf("%d", &b);

    if (a <=0 || b <=0) {
        printf("Nieprawidlowe dane\n\n");
    } else {
        area = a * b;
        system("cls||clear");
        printf("Pole prsotokata %d x %d, wynosi: %d\n\n", a, b, area);
    }
}

void cuboid_area() {
    int a, b, h, area = 0;

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
        printf("Nieprawidlowe dane\n\n");
    } else {
        area += 2 * a * b;
        area += 2 * a * h;
        area += 2 * b * h;
        system("cls||clear");
        printf("Pole prostopadloscianu %d x %d x %d, wynosi: %d\n\n", a, b, h, area);
    }
}