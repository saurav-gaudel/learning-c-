//Write a program that prints the numbers from 1 to 100. But for multiples of three, print “Fizz” instead of the number, and for multiples of five, print “Buzz”. For numbers that are multiples of both three and five, print “FizzBuzz”.
#include<iostream>
using namespace std;
int main(){
    int a=3,b=5;
for(int i=1; i<=100; i++)
{
    if (i%3==0 )
    { 
        cout<<"fizz\t";
    }
    else if(i%5==0)
    {
        cout<<"buzzz\t";

    }
    else if(i%3==0 && i%5==0)
    {
        cout<<"fizzbuzz\t";
    }
    else{
        cout<<i<<"\t";
    }
    



}

return 0;
}