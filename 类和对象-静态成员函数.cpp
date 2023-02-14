#include<iostream>
using namespace std;
class person{
public:
	static int a;
	int b;
//	静态成员函数只能访问静态成员变量
	static void func(){
		cout<<"func函数调用"<<a<<endl;
	}

};
int person::a=0;
int main(){
person a;
a.func();
person::a=300;
person::func();
}
