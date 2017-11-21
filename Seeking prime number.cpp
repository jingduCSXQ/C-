#include<iostream>
using namespace std;
class prime_number{		//基类
public:
	prime_number(){
		cout<<"请输入您所要验证素数的数值（大于1）："<<endl;
	};
	run_prime(int x);		//成员函数的声明
};
prime_number::run_prime(int x){		//成员函数的外部定义
	static int i=2;			//用静态数据成员防止每次调用时内存被清除i值不变
	if(x==i){
		cout<<"该数是素数"<<endl;
		return 0;
	}
	if(x%i==0)
	{
		cout<<"该数不是素数"<<endl;
		return 0;
	}
	else
	{
		i++;
		run_prime(x);		//递归调用原函数
	}
}
class primber: public prime_number{
	int num;				//用于接收数
public:
	getnumber(){
		cin>>num;
		run_prime(num);
	}
};
main(){
	primber number;
	number.getnumber();
	return 0;
}