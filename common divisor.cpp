#include<iostream>
using namespace std;
class number{		//����
protected:
	int i;		//���յĵ�һλ��
	int j;		//���յĵڶ�λ��
	int k;		//�����������
	int s;		//��ת��һλ�͵ڶ�λ��������
public:
	number(){
		cout<<"please enter two numbers for common divisor:"<<endl;
		cin>>i>>j;
		if(i>=j)		//��֤���������ڳ���
			return;
		else
		{
			s=j;
			j=i;
			i=s;
		}
	}
	common_divisor(){		//ŷ��������Լ���㷨
		k=i%j;
	    i=j;
		j=k;
	    if(k==0)
		    return 0;
		else
			common_divisor();
	}
};
class num: private number{		//˽������������
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
