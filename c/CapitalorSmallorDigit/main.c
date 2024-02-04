#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char c;
    printf("please enter digit,capital or small letter \n");
    scanf("%c",&c);
    i=c;
    if (i>=48&&i<=57){

        printf("it is a Digit \n");
    }
    if (i>=65&&i<=90){
        printf("it is a Capital letter \n");
    }
    if (i>=97&&i<=122){
        printf("it is a small letter \n");
    }



    return 0;
}
