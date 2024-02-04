#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int flag=0;
    printf("please enter the number of elements: ");
    scanf("%d",&N);
    int arr[N];
    for(int j=0; j<N ; j++){
        printf("\narr[%d]= ",j);
        scanf("%d",&arr[j]);
    }
    for(int i=0 ; i<N ;i++){

        if(arr[i]==arr[N-(i+1)]){

                flag=1;
           }
        else {
            flag=0;
        }
    }
    if(flag==1){
        printf("\nYES\n");
    }
    else{
        printf("\nNO\n");
    }











    return 0;
}
