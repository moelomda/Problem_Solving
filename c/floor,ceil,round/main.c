#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float r1;
    int i;
    int f,c,t;
    printf("Enter your numbrt: \n");
    scanf("%f",&num);
    i=(int)num;
    r1=num-i;
    if (r1>=0.5){
        num=i+1;
    }
    else{
        num=i;
}
printf("number rounded to %i \n",(int) num);

if ((num-i)<(i+1-num)){
    f=i;
    c=i+1;

}
else{
    f=i+1;
    c=i;
}

printf("the ceiling of the number is %i \n",c);
printf("the floor of the number is %i \n",f);
}
