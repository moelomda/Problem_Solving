#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0;
    int k=0;
    int counter=0;

    printf("please enter the two number k and s where K>S: ");
    scanf("%d %d",&s,&k);
    for(int x = 0; x < k ; x++ ){
            if(x+y+z=s){
                    counter++;
    }
    }
        for(int y = 0; y < k ; y++ ){
            if(x+y+z=s){
                    counter++;
        }
            for(int z = 0; z < k ; z++ ){
                if(x+y+z=s){
                    counter++;
                }
            }
    printf("\n%d",counter);
    return 0;
}
