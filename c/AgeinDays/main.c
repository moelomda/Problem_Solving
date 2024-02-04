#include <stdio.h>
#include <stdlib.h>

int main()

{
    float days,months,years;
    printf("please enter your age in days \n");
    scanf("%f",&days);
    years=days/365.25;
    months=years*12;

    printf("your age is %0.2f years %0.2f months %0.2f days \n",years,months,days);





    return 0;
}
