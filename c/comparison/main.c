#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A, B;
    char S;

    printf("Please enter your comparison (A <op> B): ");
    scanf("%d %c %d", &A, &S, &B);

    switch (S)
    {
    case '=':
        if (A == B)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        break;
    case '<':
        if (A < B)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        break;
    case '>':
        if (A > B)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        break;
    default:
        printf("Invalid comparison operator. Please use '=', '<', or '>'.\n");
    }

    return 0;
}
