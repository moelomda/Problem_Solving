#include <stdio.h>

int main() {
    long long l1, r1, l2, r2;

    printf("Enter the boundaries of the first interval [l1, r1]: ");
    scanf("%lld %lld", &l1, &r1);

    printf("Enter the boundaries of the second interval [l2, r2]: ");
    scanf("%lld %lld", &l2, &r2);

    long long intersectionStart = (l1 > l2) ? l1 : l2;
    long long intersectionEnd = (r1 < r2) ? r1 : r2;

    if (intersectionStart <= intersectionEnd) {
        printf("%lld %lld\n", intersectionStart, intersectionEnd);
    } else {
        printf("-1\n");
    }

    return 0;
}
