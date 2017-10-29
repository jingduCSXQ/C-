#include<iostream>
using namespace std;
#define A 5
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
	book b[A];
	int k;
	cout<<"please enter five numbers for this object array :"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>k;
		b[i]=k;
	}
	for(int x=4;x>=0;x--)
	{
		b[x].print();
	}
	return 0;
}