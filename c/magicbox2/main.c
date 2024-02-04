#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy1(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x = 2, y = 1;
    gotoxy1(x, y);
    printf("1");
    int N = 3;
    int i;

    for (i = 2; i <= 9; i++) {
        // Calculate the next position, wrapping around the table
        int nextX = x + 1;
        int nextY = y - 1;

        if (nextX > N) {
            nextX = 1;
        }
        if (nextY < 1) {
            nextY = N;
        }

        x = nextX;
        y = nextY;

        gotoxy1(x, y);
        printf("%d", i);

        // Print a newline character to create the desired pattern
        if (i % N == 0) {
            printf("\n");
        }
    }

    // Now, you can use x and y outside the loop
    printf("\nFinal x: %d, y: %d\n", x, y);

    return 0;
}
