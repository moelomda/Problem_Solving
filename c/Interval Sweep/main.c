#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even;
    int odd;
    printf("pleas enter even number \n");
    scanf("%d",&even);
    printf("pleas enter odd number \n");
    scanf("%d",&odd);
    if(abs(even-odd)==1){
        printf("YES\n");

    }
    else {
        printf("NO\n");
    }
    return 0;


}
