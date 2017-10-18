#include<iostream.h>
int main()
{
	int a,b;
	cout<<"Enter two number:";
	cin>>a>>b;
	int min;
	min=a>b?b:a;
	for (int d=2;d<min;d++)
		if(((a%d)==0)&&((b%d)==0))
			break;
		if (d==min)
		{
			cout<<"No common denominators"<<endl;
			return 0;
		}
		cout<<"The lowest common denominator is "<<d<<'\n';
		return 0;
}