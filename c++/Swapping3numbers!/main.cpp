#include <iostream>

using namespace std;
void swap(int &x , int &y , int &z )
{
    int temp = x ;
    x = y ;
    y = z ;
    z = temp;
}
int main()
{
    int a = 115 ;
    int b =20 ;
    int c =301;
    cout << "numbers before Swapping  "<<a<<" : "<<b<<" : "<<c<<endl;
    swap(a , b , c);
    cout << "numbers after Swapping   "<<a<<" : "<<b<<" : "<<c<<endl;
    return 0;
}
