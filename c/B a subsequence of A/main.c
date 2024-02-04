#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int s;
    int counter=0;
    printf("\n Enter the number of elemnts of array 1: ");
    scanf("%d",&N);
    printf("\n Enter the number of elemnts of array 2: ");
    scanf("%d",&s);
    int arr[N];
    int arr1[s];
    printf("\n enter elemnts of array 1 \n");
    for (int k=0 ; k<N ; k++)
    {
        scanf("%d",&arr[k]);
    }
    printf("\n enter elemnts of array 2 \n");
    for (int M=0 ; M<s ; M++)
    {
        scanf("%d",&arr1[M]);
    }
    for(int i=0; i<s ; i++)
    {
        for(int j=0; j<N ; j++)
        {
            printf("i=%d j=%d \n",i,j);
            if(arr1[i]==arr[j]){


               if (counter<=i)
                {
                    counter++;
                }

        }

    }
    }
    printf("\nvalue of counter is %d \n",counter);
    if (counter==s)
    {

        printf("b is subsequence of a \n");
    }
    else
    {
        printf("NOT \n");
    }

    return 0;
}
