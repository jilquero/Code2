#include "area.h"
#include "volume.h"
#include <stdio.h>

int main() {
    int run = 1;
    int choice;
    system("cls||clear");

    while (run == 1) {
        printf("Co chcesz obliczyc:\n");
        printf("1. Pole prostokata\n");
        printf("2. Objetosc prostokata\n");
        printf("3. Pole prostopadloscianu\n");
        printf("4. Objętosc prostopadloscianu\n");
        printf("0. Wyjdz z programu\n");

        scanf("%d", &choice);

        switch (choice) {
        case 1:
            rectangle_area();
            break;
        
        case 2:
            rectangle_volume();
            break;
        
        case 3:
            cuboid_area();
            break;
        
        case 4:
            cuboid_volume();
            break;

        case 0:
            run = 0;
            break;
        
        default:
            break;
        }
    }

    system("cls||clear");
    return 0;
}