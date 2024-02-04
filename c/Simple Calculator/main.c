#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{

    int n1,n2;
    int choice;
    printf("please enter the two numbers\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    system("cls");
    printf("choose the operation: \n");
    printf("1-addition\n2-multiblication\n3-divison\n");
    scanf("%d",&choice);
    system("cls");

    switch (choice){

case 1:
    printf("addition operation [%d]+[%d]=[%d]\n",n1,n2,n1+n2);
    getchar();
    break;
case 2:
    printf("[%d]*[%d]=[%d]\n",n1,n2,n1*n2);
    break;
case 3:
    printf("[%d]/[%d]=[%d]\n",n1,n2,n1/n2);
    break;

    }
  return 0;
}
