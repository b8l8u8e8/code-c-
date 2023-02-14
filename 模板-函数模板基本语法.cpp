#include<iostream>
#include<string>
using namespace std;

void swapint(int&a,int&b){
	int temp=a;
	a=b;
	b=temp;
}
void swapdouble(double&a,double&b){
	double temp=a;
	a=b;
	b=temp;
}
//函数模板
template<typename T>//声明一个模板，告诉编译器后面的代码中的T是一个通用数据类型
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
}

void test01(){
//利用函数模板
//两种方式
//1.自动类型推导
int a=5,b=6;
myswap(a,b);
cout<<a<<endl<<b<<endl;
//2.显示指定类型
myswap<int>(a,b);
cout<<a<<endl<<b<<endl;
}

int main(){
	test01();

}
