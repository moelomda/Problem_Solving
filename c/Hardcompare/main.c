#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,C,D;
    long result1 , result2 ;


    printf("please enter four numbers\n");
    scanf("%d %d %d %d",&A,&B,&C,&D);
    result1=pow(A,B);
    result2=pow(C,D);
    if(result1>result2){
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}
