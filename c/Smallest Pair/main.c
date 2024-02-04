#include <stdio.h>
#include <limits.h>

int main() {
    int L = 0, M = 0;
    printf("Please enter the number of test cases: ");
    scanf("%d", &L);
    printf("Please enter the number of elements: ");
    scanf("%d", &M);

    int arr[L][M];

    int min = INT_MAX; // Initialize min to a large value.

    for (int i = 0; i < L; i++) {
        printf("Enter the elements for test case %d:\n", i + 1);

        for (int j = 0; j < M; j++) {
            printf("Element[%d] = ", j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < L; i++) {
        int sum = 0; // Reset sum for each test case.

        for (int j = 0; j < M - 1; j++) {
            sum = arr[i][j] + arr[i][j + 1];

            if (sum < min) {
                min = sum;
            }
        }
    }

    printf("\nMinimum sum of pairs across all test cases: %d\n", min);

    return 0;
}
