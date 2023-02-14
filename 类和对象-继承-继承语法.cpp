#include<iostream>
#include<string>
using namespace std;
class base1{
public:
	int m_a;
	base1(){
		m_a=100;
	}
};
class base2{
public:
	int m_a;
	base2(){
		m_a=200;
	}
};
//多继承语法
class son:public base1,public base2{
public:
	int m_a;
	son(){
		m_a=300;
	}
	
};



int main(){
	son s;
	//多父类，子类访问成员变量处理
	cout<<"son-m_a"<<s.m_a<<endl;
	cout<<"base1-m_a"<<s.base1::m_a<<endl;
	cout<<"base2-m_a"<<s.base2::m_a<<endl;
}
