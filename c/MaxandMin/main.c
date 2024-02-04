#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max,min;
    printf("please enter three numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    max=a;
    if (b>max&&b>c){
        printf("the maximum number is %d\n",b);
    }
    else if (c>max&&c>b){
        printf("the maximum number is %d\n",c);
    }
    else{
        printf("the maximum number is %d\n",a);
    }
    min=a;
    if (b<min&&b<c){
        printf("the minimum number is %d\n",b);
    }
    else if (c<min&&c<b){
        printf("the minimum number is %d\n",c);
    }
    else{
        printf("the minimum number is %d\n",a);
    }






    return 0;
}
