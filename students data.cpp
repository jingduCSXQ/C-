#include<iostream>
using namespace std;
#define A 5;//����ѧ����������
class data{
private:
	char *name;//����
	int *stu_num;//ѧ��
	float score;//���˳ɼ�
	static int total_stu;//ѧ��������
	static float total_s;//ѧ���ܳɼ�
	float ave_score;//ƽ���ɼ�
public:
	data(){};
	data(char *n,int *s_n,int s){
		*name=new char[strlen(*n)+1];
		*stu_num=*s_n;
		score=s;
	}
	stu_score(){
		++total_stu;
		total_s+=score;
		ave_score=total_s/total_stu;
		return 0;
	}
	void data_show(){
		cout<<"\n ѧ��������"<<*name;
		cout<<"\n ѧ��ѧ�ţ�"<<*stu_num;
		cout<<"\n ѧ���ɼ���"<<score;
		cout<<"\n ѧ����������"<<total_stu;
		cout<<"\n ѧ���ܳɼ���"<<total_s;
		cout<<"\n ѧ��ƽ���ɼ���"<<ave_score;
	}
};
int data::total_stu=0;//ѧ��������ʼ����ʽ��Ҳ�ɲ�дĬ��Ϊ0��
main(){
	data stu_data[A];
	cout<<"please enter a student date (������ѧ�š��ɼ�) :"<<endl;
	char *n;
	int *s_n;
	float s;
	for(int i=0;i<A;i++)
	{
		cin>>*n>>*s_n>>s;
		stu_data[i]=(*n,*s_n,s);
		stu_data[i].stu_score();
		stu_data[i].data_show();
	}
	return 0;
}