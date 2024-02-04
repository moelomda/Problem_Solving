#include <stdio.h>

int isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return 0; // Not a lucky number
        }
        num /= 10;
    }
    return 1; // It's a lucky number
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Lucky numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isLucky(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
