#include<iostream>
#include<string>
using namespace std;
//类模板实例化后调用的时候才会创建成员函数（如果实例化后就创建所有，所有不同类的成员函数相对一个确定的类）
//类实例化后就会创建所有成员函数
class person1{
public:
	
	void show1(){
		cout<<"person1 show"<<endl;
	}
};
class person2{
public:
	
	void show2(){
		cout<<"person2 show"<<endl;
	}
};
template<class t>
class myclass{
public:
	t obj;
	//类模板中的成员函数
	void func1(){
		obj.show1();
	}
	void func2(){
		obj.show2();
	}
};
void test01(){
	myclass <person1>a;
	a.func1();
//	a.func2();（如果实例化后就创建所有，所有不同类的成员函数相对一个确定的类）
}

int main(){
	test01();
}
