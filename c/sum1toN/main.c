#include <stdio.h>

int main() {
    int N;

    // Input the value of N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N must be a positive integer.\n");
    } else {
        // Calculate the sum
        int sum = (N * (N + 1)) / 2;

        // Print the result
        printf("The sum of numbers from 1 to %d is: %d\n", N, sum);
    }

    return 0;
}
