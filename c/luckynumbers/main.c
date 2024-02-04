#include <stdio.h>

int main() {
    int N;
    int first;
    int seconed;

    printf("Enter a two-digit number (10 to 99): ");
    scanf("%d", &N);
    first=N%10;
    seconed=(N-first)/10;
    if (first%seconed==0||seconed%first==0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


}
