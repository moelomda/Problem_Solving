#include <stdio.h>

void swapRows(int A[][500], int N, int X, int Y) {
    for (int j = 0; j < N; j++) {
        int temp = A[X][j];
        A[X][j] = A[Y][j];
        A[Y][j] = temp;
    }
}

void swapColumns(int A[][500], int N, int X, int Y) {
    for (int i = 0; i < N; i++) {
        int temp = A[i][X];
        A[i][X] = A[i][Y];
        A[i][Y] = temp;
    }
}

int main() {
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);
    int A[500][500];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if (X >= 1 && X <= N && Y >= 1 && Y <= N) {
        swapRows(A, N, X - 1, Y - 1);
        swapColumns(A, N, X - 1, Y - 1);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid input. X and Y should be between 1 and N.\n");
    }

    return 0;
}
