#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M=0;
    int N=0;
    printf("please enter the number of elements:\n");
    scanf("%d",&N);
    int arr[N];
    printf("please enter the elements:\n");
    for (int i=0 ; i<N; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("please enter the number \n");
    scanf("%d",&M);
    int flags[M];
    for (int j=0 ; j<M; j++ )
    {
        flags[j]=0;
    }
    for(int k=0 ; k<M ; k++)
    {
        for(int l=0 ; l<N ; l++)
        {
            if(arr[l]==k+1)
            {

                flags[k]=flags[k]+1;
            }
        }
    }
    for (int i=0 ; i<M; i++ )
    {
        printf("\n%d\n",flags[i]);

    }
    return 0;
}
