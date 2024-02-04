#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int *ptr=arr;
    printf("---------------------filling array----------------\n");

    for (int i=0 ; i < 5 ; i++ ){
        printf("arr[%d]=  ",i);
        scanf("%d",&ptr[i]);

    }
    for (int j=0 ; j < 5 ; j++ ){
        printf("\narr[%d]= %d \n",j,ptr[j]);


    }





    return 0;
}
