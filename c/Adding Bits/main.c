#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int result;
    printf("please enter the two numbers you want to add\n");
    scanf("%d %d",&num1,&num2);
    result=num1 ^ num2;
    printf("the result of wrong addition is %d\n",result);

    return 0;
}
