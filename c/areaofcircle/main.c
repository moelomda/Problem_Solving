#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define pi 3.145926

int main()
{
  double area;
  int ridus;
  printf("please enter circle ridus \n");
  scanf("%d",&ridus);
  area=pi*pow(ridus,2);
  printf("the area of circle is %lf: ",area);





    return 0;
}
