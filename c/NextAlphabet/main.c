#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in;
    int i;
    printf("please enter a lower case letter:");
    scanf("%c",&in);
    i=(int)in;
    i++;
    printf("the next alphabet letter is %c \n",i);
    return 0;
}
