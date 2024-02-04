#include <stdio.h>
#include <stdlib.h>

void prime_num(int num) {
    if (num == 0 || num == 1) {
        printf("NOT PRIME\n");
        return;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("NOT PRIME\n");
            return;
        }
    }

    printf("PRIME\n");
}

int main() {
    prime_num(2);
    printf("Hello world!\n");
    return 0;
}
