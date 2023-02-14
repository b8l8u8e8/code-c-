#include<iostream>
using namespace std;
class person{
public:
	static int a;
	//类内声明，类外初始化
	//所有对象共享数据
	//编译前分配内存
private:
	static int b;
};
int person::a=100;
int person::b=500;
int main(){
person a;
person b;
b.a=200;
person::a=300;
cout<<a.a;
//cout<<a.b;
}
