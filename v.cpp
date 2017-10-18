#include<iostream>
#include<math.h>
using namespace std;
const double PI=3.14;
class cylinder{
private:
	double radius;
	double height;
	double v;
public:
	cylinder(double r,double h)
	{
		radius=r;
		height=h;
	}
	double run_vol(){
		v=PI*pow(radius,2)*height;
		return v;
	}
	void vol()
	{
		cout<<"the cylinder volume is:"<<v<<endl;
	}
};
main()
{
//	cylinder c;
	double i,j;
	cout<<"pleater enter a number which with radius and height:"<<endl;
	cin>>i>>j;
	cylinder c(i,j);
	c.run_vol();
	c.vol();
	return 0;
}
