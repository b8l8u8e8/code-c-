#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class person{
public:
	T1 m_name;
	T2 m_age;
	person(T1 name,T2 age);
	void showperson();
};
template<class T1,class T2>
person<T1,T2>::person(T1 name,T2 age){
	m_name=name;
	m_age=age;
}
template<class T1,class T2>
void person<T1,T2>::showperson(){
	cout<<"姓名:"<<m_name<<" 年龄:"<<m_age<<endl;
}

void test01(){
	person<string,int>p("小米",2);
	p.showperson();
}

int main(){
	test01();
}
