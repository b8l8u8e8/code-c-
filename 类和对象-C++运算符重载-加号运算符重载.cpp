#include<iostream>
#include<string>
using namespace std;

class person{
public:
	int m_a;
	int m_b;
	person(){
		
	}
	person(int a,int b):m_a(a),m_b(b){
		
	}

//	成员函数重载+号--person + person
	person operator+(person& p){
		person temp;
		temp.m_a=this->m_a+p.m_a;
		temp.m_b=this->m_b+p.m_b;
		return temp;
	}

};
//全局函数重载+号--person + int
//+的类型不一样发生了函数重载（并不重复）
person operator+(person &p,int p2){
	person temp;
	temp.m_a=p2+p.m_a;
	temp.m_b=p2+p.m_b;
	return temp;
}
int main(){
	person a(10,20),b(30,40);
	person c=a+100;
	person d=a+b;
	cout<<c.m_a<<" "<<c.m_b<<endl;
	cout<<d.m_a<<" "<<d.m_b<<endl;
	return 0;
}
