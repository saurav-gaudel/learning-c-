#include<iostream>
using namespace std;
class construct{
float a ,b;
public:

construct()
{
a = 1;
b = 10;
}
construct(float first, float second)
{
a = first;
b = second;
}

void sum()
{



}
};
int main(){
    construct x,y(10.00,20.05),z;
    z=x+y;
    z.sum();
    return 0;

}
