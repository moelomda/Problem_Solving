#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float d;
    printf("pleas enter a number to determine\n");
     scanf("%f",&num);
     d = num-(int)num;
     if(d <= 0){
        printf("%d is integer number\n",(int)num);
     }
     else{
        printf("%f is a floating point number with decimal part:%f \n",num,d);
     }
    return 0;
}
