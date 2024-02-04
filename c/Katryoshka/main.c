#include <stdio.h>

int calculateStatues(int bd, int eye, int mouth, int counter) {
    if (bd >= 1 && eye >= 2 && mouth >= 1) {
        return calculateStatues(bd - 1, eye - 2, mouth - 1, counter + 1);
    }
    return counter;
}

int main() {
    int bd, eye, mouth, counter;
    counter = 0;

    printf("Please enter the number of bodies, eyes, and mouths respectively: ");
    scanf("%d %d %d", &bd, &eye, &mouth);

    counter = calculateStatues(bd, eye, mouth, counter);

    printf("The number of statues that can be created is %d\n", counter);

    return 0;
}
