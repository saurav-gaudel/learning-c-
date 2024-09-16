#include<iostream>
using namespace std;
class complex
{
	float real;
	float imag;
	public:
	complex()
{
    real = 1;
    imag = 2;
}
complex(float a,float b)
{
real=a;
imag=b;
}
void showdata()
{
    cout<<real<<"+i"<<imag<<endl;
}
friend complex operator + (complex, complex);
~complex(){
    
}

};
complex operator +(complex cc1, complex cc2)
{
    complex temp;
    temp.real = cc1.real + cc2.real;
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}

int main(){
complex c1,c2(1.1,2.2),c3;
c3 = c1 + c2;
c3.showdata();
}