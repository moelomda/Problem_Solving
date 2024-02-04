#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy1(int x, int y)

{


    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

int main()
{

    int x=2, y=1;
    gotoxy1(x,y);
    printf("1");
    int N = 3;
    for (int i= 2 ; i <=9 ; i ++)
    {

        if((i%N)!=0)
        {
             x--;
            y--;
            if(y==0){

               y=3;
            }

            if(x==0)
            {

                x=3;
            }

        }
        else
        {

            x++;
            if(x==4)
            {
                x=1;
            }


        }
        gotoxy1(x,y);
        printf("%d",i);




    }

    return 0;
}
