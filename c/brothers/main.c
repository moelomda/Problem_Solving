#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    char arr1[100];
    char sec1[50];
    char sec2[50];
    int cmp;

    printf("Please enter the first person's full name:\n");
    fgets(arr, sizeof(arr), stdin);

    printf("Please enter the second person's full name:\n");
    fgets(arr1, sizeof(arr1), stdin);

    sscanf(arr, "%*s %s", sec1);
    sscanf(arr1, "%*s %s", sec2);

    cmp = strcmp(sec1, sec2);

    if (cmp == 1) {
        printf("They are NOT brothers.\n");
    } else {
        printf("They are BROTHERS.\n");
    }

    return 0;
}
