#include<iostream>
#include<string>
using namespace std;
class person{
public:
	int *m_age;
	person(){
		m_age=NULL;
	}
	person(int age){
		m_age=new int(age);
	}
	~person(){
		if(m_age!=NULL){
			delete(m_age);
			m_age=NULL;
		}
		
	}
	//=运算符重载必须要用成员函数写，主要用于深拷贝，不写默认提供浅拷贝
	person& operator=(person&p2){
		if(m_age!=NULL){
			delete(m_age);
		}
		this->m_age=new int(*p2.m_age);
		return *this;
	}
};

int main(){
	person p(18);
	person p2(20);
	person p3(22);
	p2=p=p3;
	cout<<*p.m_age<<endl;
	cout<<*p2.m_age<<endl;
	cout<<*p3.m_age<<endl;
	return 0;
}

