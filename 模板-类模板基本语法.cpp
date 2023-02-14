#include<iostream>
#include<string>
using namespace std;
template<class nametype,class agetype>
class person{
	public:
	nametype m_name;
	agetype m_age;
	person(nametype name,agetype age){
		m_name=name;
		m_age=age;
	}
	void show(){
		cout<<m_name<<" "<<m_age<<endl;
	}
};
void test01(){
	person<string,int>p1("孙悟空",10);
	p1.show();
}

int main(){
	test01();
}
