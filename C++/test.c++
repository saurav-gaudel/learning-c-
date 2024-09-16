#include<iostream>
using namespace std;
int main(){
    int a=3,b=5;

cout<<"Natural numbers from 1 to 100 are :"<< endl;
for(int i=1; i<=100; i++)
{
    if (i==a*i)
    {
        cout<<"fizz";
       }
       else if (i==i*b)
       {
        cout<<"buzz";
       }
       
    else
    cout<<i<<" ";

}
}
