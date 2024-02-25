#include <iostream>

using namespace std;
void swap (int &x , int &y )
{
   int temp = x ;
    x = y ;
    y = temp ;
}
int main()
{
    int var1 = 7 , var2 = 231 ;

    cout << "number before swapping : "<< var1<<":"<<var2<<endl ;
    swap(var1 , var2);
    cout << "numbers After swapping : "<< var1 <<":"<< var2<< endl;

    return 0;
}
