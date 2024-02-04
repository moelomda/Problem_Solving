#include<iostream>
#include<conio.h>

   using namespace std;

struct complex {



	 private:


	   float real;
	   float imag;

	 public:


		 complex();
		 complex(float r);
		 complex(float r , float i);

		 ~complex();
		 void setReal(float r);
		 void setImg(float i);
		 float getReal();
		 float getImg();

	   void print();



}
int main(){

     clrscr();
    complex mycomp1,mycomp2(3,4) , resultcomp(5);


    mycomp1.setreal(23);
    mycomp1.setimag(2);

    resultcomp=add(mycomp1,mycomp2);

    resultcomp.print();

    resultcomp=sub(mycomp1,mycomp2);

    resultcomp.print();

getch();
return 0 ;
}


  complex::complex(){

     real=imag=0;

  cout<<"\n the deafult constructor is called \n";

  }
  complex::complex(float r ,float i){

   real=r;  imag=i;
      cout<<"constructor with two parameters is called \n";
  }
  complex::complex(float r){

  imag=real=r;


  }
  complex::~complex(){

  cout<<"destructor was called";

  }

  void complex::setImg(float i){

  i=imag;

  }
  void complex::setReal(float r){

   real=r;

  }
  float complex::getReal(){

    return real;
  }
  float complex::getImg(){
    return imag;
  }

void complex::print(){

    if (imag<0){

       cout<<real<<"-"<<fabs(imag)<<"i";

    }
    else{

        cout<<real<<"+"<<imag<<"i";
    }

}
complex add (complex num1 ,complex num2){

        complex temp;

     temp.setReal(num1.getReal()+num2.getReal());
     temp.getImg(num1.getImg()+num2.getImg());


     return temp;

}
complex sub (complex num1 ,complex num2){

        complex temp;

     temp.setReal(num1.getReal()-num2.getReal());
     temp.getImg(num1.getImg()-num2.getImg());


     return temp;

}
