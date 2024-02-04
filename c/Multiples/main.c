#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("this program for checking multiples \n");
    printf("enter the first number : \n");
    scanf("%d",&a);
    printf("enter the seconed one \n");
    scanf("%d",&b);
    if (a%b==0){
        printf("multiples \n");
    }
    else{
        printf("no multiples \n");
    }



    return 0;
}
