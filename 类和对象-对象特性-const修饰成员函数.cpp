#include<iostream>
using namespace std;
class person{
public:
	int a;
	mutable int b;//函数后加了const，这样的mutable成员变量可以修改其他的不能修改
	 void func()const{  
//		 const person * const p; 第一个const是指针指向内容不能修改，第二个const是常指针指向方向不能改变
//		 a=10; 函数后加const，成员变量不能再修改，如this->a成了常量,若要单独能修改声明变量时候加mutable
		 b=100;
		cout<<"func函数调用"<<b<<endl;
	}
	 void func2(){
		cout<<"func函数调用"<<endl;
	}

};
int main(){
	person a;
	a.b=300;
	a.func();
	
	
	return 0;
}

