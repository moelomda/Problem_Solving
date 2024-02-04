#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,r1,r2;
    printf("please enter the first number\n");
    scanf("%d",&n1);
    printf("please enter the seconed number\n");
    scanf("%d",&n2);
    r1=n1%10;
    r2=n2%10;
    printf("the summation of last digits of the two numbers is %d \n",r1+r2);
    return 0;
}
