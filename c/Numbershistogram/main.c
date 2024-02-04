#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    int lines;
    int *ptr= NULL;
    ptr=(int*)malloc(lines*sizeof(int));
     if (ptr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }
    printf("please choose a sympol to print [*,/,+,-]\n");
    scanf("%c",&s);
    printf("enter the number of lines \n");
    scanf("%d",&lines);
    printf("kindly enter the numbers for each line \n");
    for (int i=0;i<lines;i++){
        scanf("%d",&ptr[i]);
    }
    switch(s){

    case '+':
        for(int i=0; i<lines ; i++){
            for(int j=0 ;j<ptr[i];j++){

                printf("+");
            }
            printf("\n");
        }
        break;
    case '-':
        for(int i=0; i<lines ; i++){
            for(int j=0 ;j<ptr[i];j++){

                printf("-");
            }
            printf("\n");
        }
        break;
    case '*':
        for(int i=0; i<lines ; i++){
            for(int j=0 ;j<ptr[i];j++){

                printf("*");
            }
        printf("\n");}
        break;
    case '/':
        for(int i=0; i<lines ; i++){
            for(int j=0 ;j<ptr[i];j++){

                printf("/");

            }
            printf("\n");
        }
        break;
    }

      free(ptr);


    return 0;
}
