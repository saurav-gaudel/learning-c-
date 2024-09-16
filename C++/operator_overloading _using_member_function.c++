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
complex operator + (complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
};

int main(){
complex c1,c2(1.1,2.2),c3;
c3 = c1 + c2;
c3.showdata();
}