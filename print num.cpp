#include<iostream>
using namespace std;
class book{
	int qu;
	int price;
public:
	book(int j){
		qu=j;
		price=qu*10;
	}
	void print(){
		cout<<"The number is :"<<qu*price<<endl;
	}

};
main(){
	book b[5]={
		//book(1,2),
	//	book(3,4),
	//	book(5,6),
	//	book(7,8),
	//	book(9,10)
		book(0),
			book(1),
			book(2),
			book(3),
			book(4),
	};
	for(int i=0;i<5;i++)
	{
		b[i].print();
	}
	return 0;
}