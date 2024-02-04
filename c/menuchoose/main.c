#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice = 0;
    printf(" please choose your favourite fruit from the menu \n ");
    printf("1.apple \n 2.bananas \n 3.grapes \n ");
    scanf("%d",&choice);
    if(choice!=1||choice!=2||choice!=3){

        printf("invalid......");

    }
    else {
    printf(" your favourite fruit is  ");

     switch (choice){

 case 1 :
     printf(" apple \n ");
     break;
 case 2 :
     printf(" bananas \n ");
     break;
 case 3 :
    printf ("grapes \n  ");
    break;

     }

     }






    return 0;
}
