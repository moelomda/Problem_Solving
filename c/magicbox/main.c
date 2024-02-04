#include <stdio.h>

int main() {
    int n = 3; // Size of the magic square (3x3)
    int magicSum = n * (n * n + 1) / 2;
    int num = 1;

    printf("Magic Square:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int row = i;
            int col = j;

            if ((i == 0 && j == n - 1) || (i == n - 1 && j == 0)) {
                // Handle the corners
                row = (i == 0) ? n - 1 : 0;
                col = (j == 0) ? n - 1 : 0;
            } else {
                // Move diagonally
                if (i > 0) i--;
                if (j < n - 1) j++;
            }

            printf("%2d ", num++);
            if (num > n * n) num = 1;
        }
        printf("\n");
    }

    return 0;
}
