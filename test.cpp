#include<iostream>
using namespace std;
class book{
	int qu;
	int price;
	public:
	book(int a){
		qu=a;
		price=a*10;
	}
	show(){
		cout<<"the number is :"<<qu*price<<endl;
		}
	};
	main(){
		book book1[5];//bug  book1是一个对象  
		cout<<"please enter five numbers :"<<endl;
		int j;
		for(int i=0;i<5;i++)
		{
			cin>>j;
			book1.book(j);//这块不是一个数组  而是一个对象
			book1.show();
			}
		}