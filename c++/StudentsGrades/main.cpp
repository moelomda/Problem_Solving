#include <iostream>

using namespace std;

int main()
{
    int  std1 ,std2 ;
    string name1 , name2 ;
    short grade1 ,grade2 ;

    cout <<"what is student 1 Name : " <<endl;
    cin>> name1 ;
    cout << "His ID : "<<endl;
    cin>>std1 ;
    cout << "grade : " <<endl;
    cin >> grade1 ;
        cout <<"what is student 2 Name : " <<endl;
    cin>> name2 ;
    cout << "His ID : "<<endl;
    cin>>std2 ;
    cout << "grade : " <<endl;
    cin >> grade2 ;

    cout << "Students grades in math"<<endl;
    cout <<name1 <<"(with ID "<<std1<<")got grade : " << grade1 <<endl;
    cout <<name2 <<"(with ID "<<std2<<")got grade : " << grade2 <<endl;


    return 0;
}
