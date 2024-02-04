#include <stdio.h>

int main() {
    int x, y;
    printf("Please enter the coordinates (x, y): \n");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origin\n");
    } else if (x == 0) {
        printf("X-Axis\n");
    } else if (y == 0) {
        printf("Y-Axis\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrant 1 (Q1)\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrant 2 (Q2)\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrant 3 (Q3)\n");
    } else if (x > 0 && y < 0) {
        printf("Quadrant 4 (Q4)\n");
    } else {
        printf("Invalid input or special case.\n");
    }

    return 0;
}
