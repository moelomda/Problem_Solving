#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0;
    int digit=0;
    printf("please enter the number of test cases\n");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
        printf("enter the case number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j=0 ; j < s ; j++){
        while(arr[j]>0){
           digit=arr[j]%10;
           printf("%d  ",digit);
            arr[j]=arr[j]/10;
        }
        printf("\n");
    }

    return 0;
}
