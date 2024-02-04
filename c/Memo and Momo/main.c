#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,K;
    printf("please enter memos number\n");
    scanf("%d",&A);
    printf("please enter momos number\n");
    scanf("%d",&B);
    printf("please enter the devidor\n");
    scanf("%d",&K);
    if (A%K==0&&B%K==0){
        printf("both\n");
        }
   else if (A%K==0){
        printf("MEMO\n");
    }
    else if (B%K==0){
        printf("MOMO\n");
    }

    return 0;
}
