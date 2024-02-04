#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    long multi;
    int last2;

    printf("please enter three numbers\n");
    scanf("%d %d %d",&A,&B,&C);
    multi=A*B*C;
    last2=multi%100;
    printf("The Last two digits are %d\n",last2);
    return 0;
}
