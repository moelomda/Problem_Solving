#include <stdio.h>
#include <stdlib.h>

int main()
{   int n1,n2;

    int *ptr1=&n1;
    int *ptr2=&n2;
    printf("enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("\nthe value of n1 is %d\n",*ptr1);
    printf("the value of n2 is %d \n",*ptr2);
    int result=*ptr1+*ptr2;
    printf("\nthe result of addition is %d ",result);
    return 0;
}
