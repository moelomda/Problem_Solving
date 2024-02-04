#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c ;
    int i;
    printf("Enter a lowercase litter \n");
    scanf("%c",&c);
    i=c;
    i=i-32;
    printf("the ASCII value  is %i \n",i);

    printf("the upper case of your litter is %c \b",i);
}
