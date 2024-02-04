#include <stdio.h>
#include <stdlib.h>
double avg_array(int arr[], int index){
 double avg=0;
 double sum=0;
 for (int i=0 ; i<index ; i++){

    sum+=arr[i];
 }
avg=sum/index;



return avg;
}

int main()
{
    int arr1[10]={3,5,43,42,4,78,56,33,12,10};
    int arr2[3]={1,2,5};
    double avg1=avg_array(arr1,10);
    printf("%lf\n",avg1);
    double avg2=avg_array(arr2,3);
    printf("%lf\n",avg2);
    return 0;
}
