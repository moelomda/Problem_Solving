#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int equation(int N,int X){
    double S = 0;
    for (int i = 0; i <= N-2 ; i+=2 ){

        S+=pow(X,i+2);
    }
    return S;
}



int main()
{
    printf("the result of equation is %d  \n",equation(5,5));
}
