#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int original,digit;
    int revesed=0;
    printf("Please enter your number: ");
    scanf("%d",&N);
    original=N;
    while(N>0){
        digit=N%10;
      revesed=revesed*10+digit;

        N/=10;

    }
    printf("the revesed Number is %d \n",revesed);
    if(original==revesed){
        printf("YES\n");
    }
    else{
        printf("NO!\n");
    }
    return 0;
}
