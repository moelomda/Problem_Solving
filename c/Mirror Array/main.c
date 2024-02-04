#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0;
    int M=0;

    printf("enter the 2d array size\n");
    scanf("%d %d",&N,&M);
    int arr[N][M];
    printf("filling the array \n");
    for (int i=0 ; i<N ; i++)
    {
        for(int j=0; j<M ; j++)
        {
            printf("arr[%i][%i]= ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    for(int k=0 ; k<N ; k++)
    {
        for(int l=0 ; l<M ; l++)
        {
            int x=l;
            if(l-1<0){
                l=M;
            }

            arr[k][x]=arr[k][l-1];
        }
    }
         for (int i=0 ; i<N ; i++)
    {
        for(int j=0; j<M ; j++)
        {
            printf(" %d  ",arr[i][j]);

        }
        printf("\n");
    }


 return 0;
}
