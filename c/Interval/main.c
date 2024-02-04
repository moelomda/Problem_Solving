#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter three numbers (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    // Sort the numbers in ascending order
    int temp;
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    // Print the sorted numbers
    printf("%d %d %d\n\n", A, B, C);

    // Print the numbers in the order they were read
    printf("%d %d %d\n", A, B, C);

    return 0;
}
