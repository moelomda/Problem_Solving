#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int counter=0;
    printf("\n Enter the number of elemnts : ");
    scanf("%d",&N);
    int arr[N];
    int arr1[N];
    printf("\n enter elemnts of array 1 \n");
    for (int k=0 ; k<N ; k++)
    {
        scanf("%d",&arr[k]);
    }
    printf("\n enter elemnts of array 2 \n");
    for (int M=0 ; M<N ; M++)
    {
        scanf("%d",&arr1[M]);
    }
    for(int i=0; i<N ; i++)
    {
        for(int j=0; j<N ; j++)
        {
            if(arr[i]==arr1[j])
            {
                if (counter<=i)
                {
                    counter++;
                }
            }

        }
    }
    printf("\n value of counter is %d \n",counter);
    if (counter==N)
    {

        printf("permutation\n");
    }
    else
    {
        printf("NON permutaion \n");
    }

    return 0;
}
