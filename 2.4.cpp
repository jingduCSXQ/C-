#include<iostream>
using namespace std;
sum(int a,int b);
int main()
{
	int a,b,c;
	cout<<"Enter two number:"<<endl;
	cin>>a>>b;
	c=sum(a,b);
	cout<<"sum is: "<<c<<endl;
	return 0;
}
sum(int a,int b)
{
	return a+b;
}
