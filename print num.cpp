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
   	//��ʽһ��ֱ���ڶ�����������ͬʱ��ʼ�����׶�������ֵ�̶����ɲ����Ժ����÷�Χ̫С��ͬʱ���캯����ֵ����Ҫ�������������ա�
		book(1,2),
		book(3,4),
		book(5,6),
		book(7,8),
		book(9,10)*/


	//��ʽ������������Ķ���ͬʱ�Ǳ��������乹�캯���ģ���ֱ�ӳ�ʼ����Ҳ��ֻ���岻��ֵ���޲κ����ĳ�ʼ�����ڹ��캯������ɡ�

		// ���£���ֵΪһ�������ǰ���˳��ֵ�����е����ݳ�Ա�����ǵ��ú���Ϊһ�Ĺ��캯����ָ���ĳ�Ա��ֵ��ֵ
/*		book(0),
		book(1),
		book(2),
		book(3),
		book(4)};*/

	//��ʽ��������Զ���
	book b[5];		//�Զ������޲��޺����幹�캯����δ��ֵ��
	int k;
	cout<<"please enter five numbers for this object array :"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>k;
		b[i]=k;		//���ú�һ�εĹ��캯��
	}
	for(i=0;i<5;i++)
	{
		b[i].print();
	}
	return 0;
}