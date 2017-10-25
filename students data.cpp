#include<iostream>
using namespace std;
#define A 5;//控制学生输入总量
class data{
private:
	char *name;//姓名
	int *stu_num;//学号
	float score;//个人成绩
	static int total_stu;//学生总人数
	static float total_s;//学生总成绩
	float ave_score;//平均成绩
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
		cout<<"\n 学生姓名："<<*name;
		cout<<"\n 学生学号："<<*stu_num;
		cout<<"\n 学生成绩："<<score;
		cout<<"\n 学生总人数："<<total_stu;
		cout<<"\n 学生总成绩："<<total_s;
		cout<<"\n 学生平均成绩："<<ave_score;
	}
};
int data::total_stu=0;//学生人数初始化方式，也可不写默认为0；
main(){
	data stu_data[A];
	cout<<"please enter a student date (姓名、学号、成绩) :"<<endl;
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