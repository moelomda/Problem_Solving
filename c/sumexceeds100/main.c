#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int sum=0;

    printf("enter number and the program will exit when some exceeds 100 \n ");

    while (1){
        printf("please enter number  \n ");
        scanf ("%d", &num);
        sum+=num ;

        if (sum>100){

            printf("some exceeded 100.......  \n ");

            break;

        }


    }






}
