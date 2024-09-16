#include<iostream>
using namespace std;
int max(int p,int q)
{
	if (p>q)
	return p;
	else;
	return q;
}
int main(){
	int a,b;
	cout<<"Enter number to be checked: "<<endl;
	cin>>a>>b;
	cout<<"THe greatest number is :"<<max(a,b)<<endl;
	return 0;
	
	
}
