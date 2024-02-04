#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor=0;
    int n1,n2;
    int max=0;
    if(n1>n2){
        max=n1;
    }
    else{
        max=n2;
    }


    printf("please enter two integers \n");
    scanf("%d %d",&n1,&n2);
    for(int i=1; i<max/2;i++){
        if(n1%i==0 && n2%i==0){
            divisor=i;
            if (i>divisor){
                divisor=i;
            }

        }
    }
    printf("the greatest common divisor is %d \n",divisor);
    return 0;
}
