#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    char operat;
    printf("please enter an expression in the form of A operator B \n");
    scanf("%lf %c %lf",&a,&operat,&b);

    switch(operat){

case '+':
    printf("your operation result is %lf \n",a+b);
   break;
case '-':
    printf("your operation result is %lf \n",a-b);
    break;
case '*':
    printf("your operation result is %lf \n",a*b);
    break;
case '/':
    printf("your operation result is %lf \n",a/b);
    break;












    }
    printf("Hello world!\n");
    return 0;
}
