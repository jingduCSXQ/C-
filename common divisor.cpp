#include<iostream>
using namespace std;
class number{		//基类
protected:
	int i;		//接收的第一位数
	int j;		//接收的第二位数
	int k;		//用于算出余数
	int s;		//中转第一位和第二位数据所需
public:
	number(){
		cout<<"please enter two numbers for common divisor:"<<endl;
		cin>>i>>j;
		if(i>=j)		//保证被除数大于除数
			return;
		else
		{
			s=j;
			j=i;
			i=s;
		}
	}
	common_divisor(){		//欧几里德最大公约数算法
		k=i%j;
	    i=j;
		j=k;
	    if(k==0)
		    return 0;
		else
			common_divisor();
	}
};
class num: private number{		//私有属性派生类
public:
	num(){}
	num_common_divisor(){		
		common_divisor();
	}
	void show(){
		cout<<"this numbers common divisor is :"<<i<<endl;
	}
};
main(){
	num obj;
	obj.num_common_divisor();
	obj.show();
	return 0;
}
