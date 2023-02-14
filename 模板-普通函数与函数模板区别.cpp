#include<iostream>
#include<string>
using namespace std;
//普通函数调用可以发生自动类型转换
//函数模板使用的时候用自动推导不能发生自动类型转换
//函数模板使用的时候用显示指定类型，可以发生自动类型转换
template<class T>
void func(T a){
	cout <<a<<endl;
}
void test01(){
func(10);
func(11.5);
func<int>(11.5);//强制转换
}

int main(){
	test01();

}
