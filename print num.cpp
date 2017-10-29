#include<iostream>
using namespace std;
class book{
	int qu;
	int price;
public:
	book(){};
	book(int j){
		qu=j;
		price=qu*10;
	}
	void print(){
		cout<<"The number is :"<<qu*price<<endl;
	}

};
main(){
/*	book b[5]={
   	//方式一：直接在定义对象数组的同时初始化，弊端在于数值固定，可操作性和适用范围太小，同时构造函数传值必须要有两个参数接收。
		book(1,2),
		book(3,4),
		book(5,6),
		book(7,8),
		book(9,10)*/


	//方式二：对象数组的定义同时是必须会调用其构造函数的，可直接初始化，也可只定义不传值将无参函数的初始化放在构造函数内完成。

		// 如下，传值为一，他不是按照顺序传值给类中的数据成员，而是调用含参为一的构造函数所指定的成员传值赋值
/*		book(0),
		book(1),
		book(2),
		book(3),
		book(4)};*/

	//方式三：灵活性定义
	book b[5];		//自动调用无参无函数体构造函数（未赋值）
	int k;
	cout<<"please enter five numbers for this object array :"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>k;
		b[i]=k;		//调用含一参的构造函数
	}
	for(i=0;i<5;i++)
	{
		b[i].print();
	}
	return 0;
}