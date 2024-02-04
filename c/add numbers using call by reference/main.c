#include <stdio.h>
#include <stdlib.h>
int ADD_2(int *ptr1 ,int *ptr2){


return (*ptr1)+(*ptr2);
}

int main()
{
    int n1=5;
    int n2=20;
     int result=ADD_2(&n1,&n2);
    printf("result= %d \n",result);
    return 0;
}
