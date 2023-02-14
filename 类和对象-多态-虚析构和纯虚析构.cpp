#include<iostream>
#include<string>
using namespace std;
class animal{
public:
	animal(){
		cout<<"animal构造函数"<<endl;
	}
	virtual ~animal(){
		cout<<"animal析构函数"<<endl;
	}
	virtual void speak()=0;//纯虚函数
	string *m_name;

};
class cat:public animal{
public:
	cat(){
	cout<<"cat构造函数"<<endl;	
	m_name=new string("默认");
	}
	cat(string name){
		cout<<"cat构造函数"<<endl;
		m_name=new string(name);
	}
	~cat(){
		cout<<"cat析构函数"<<endl;
		if(m_name!=NULL){
			delete(m_name);
			m_name=NULL;
		}
	}
	virtual void speak(){
		cout<<*m_name<<"小猫在说话"<<endl;
	}
};
void test01(){
	animal *p=new cat("tom");
	p->speak();
	//(没有虚析构)delete父类指针不会走子类的析构代码，会走父类的析构代码
	delete p;
//	cat a("mike");
//	a.speak();  单独实例化a，会走全部流程包括a的析构父类的析构
}
int main(){
	test01();
	system("pause");
}
