#include <stdio.h>

int main() {
    int s = 0;
    int k = 0;
    int counter = 0;

    printf("Please enter the two numbers k and s where K > S: ");
    scanf("%d %d", &k, &s);

    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            for (int m = 0; m <= k; m++) {
                if (i + j + m == s) {
                    counter++;
                }
            }
        }
    }

    printf("Number of combinations: %d\n", counter);

    return 0;
}
