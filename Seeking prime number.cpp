#include<iostream>
using namespace std;
class prime_number{		//����
public:
	prime_number(){
		cout<<"����������Ҫ��֤��������ֵ������1����"<<endl;
	};
	run_prime(int x);		//��Ա����������
};
prime_number::run_prime(int x){		//��Ա�������ⲿ����
	static int i=2;			//�þ�̬���ݳ�Ա��ֹÿ�ε���ʱ�ڴ汻���iֵ����
	if(x==i){
		cout<<"����������"<<endl;
		return 0;
	}
	if(x%i==0)
	{
		cout<<"������������"<<endl;
		return 0;
	}
	else
	{
		i++;
		run_prime(x);		//�ݹ����ԭ����
	}
}
class primber: public prime_number{
	int num;				//���ڽ�����
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