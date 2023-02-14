#include<iostream>
#include<string>
using namespace std;

class base{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	/*
	  抽象类特点：
	  1.无法实例化对象
	  2.抽象类的子类必须重写父类中的纯虚函数，否则也属于抽象类
	 */
	virtual void func()=0;
};
class son:public base{
public:
};
class son2:public base{
	virtual void func(){
		cout<<"func函数调用"<<endl;
	}
};
void test01(){
//	base b;抽象类无法实例化对象
//	new b;抽象类无法实例化对象
//son a;抽象类的子类必须重写父类中的纯虚函数
base *b=new son2;
(*b).func();

}
int main(){
	test01();
}
