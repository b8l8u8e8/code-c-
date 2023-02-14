#include<iostream>
#include<string>
using namespace std;

template<class nametype,class intytype>
class person{
public:
	nametype m_name;
	intytype m_age;
	person(nametype name,intytype age){
		m_name=name;
		m_age=age;
	}
};
//类模板对象做函数参数1
void printperson(person<string,int>&p){
	cout<<"姓名："<<p.m_name<<" 年龄:"<<p.m_age<<endl;
}
//类模板对象做函数参数2
template<class t,class t2>
void printperson2(person<t,t2>&p){
	cout<<"姓名："<<p.m_name<<" 年龄:"<<p.m_age<<endl;
}
void test01(){
	person<string,int>p("孙悟空",100);
	printperson2(p);
}

int main(){
	test01();
}
