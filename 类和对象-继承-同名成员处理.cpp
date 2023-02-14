#include<iostream>
#include<string>
using namespace std;
class base{
public:
	base(){
		m_a=100;
	}
	int m_a;
	void func(){
		cout<<"父类函数调用"<<endl;
	}
};
class son :public base{
public:
	son(){
		m_a=200;
	}
	int m_a;
	void func(){
		cout<<"子类函数调用"<<endl;
	}
};

int main(){
//同名前面加作用域，不加默认子类
	son b;
	cout<<" 子类下的m_a"<<b.m_a<<" 父类下的m_a"<<b.base::m_a<<endl;
	b.func();
	b.base::func();
}
