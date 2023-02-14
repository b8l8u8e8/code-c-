#include<iostream>
#include<string>
using namespace std;
//自动类型推导必须推导出一致的数据类型才能使用
//模板必须要确定出t的数据类型，才可以使用

template<class T>//typename可以替换成class
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
}
template<class T>
void func(){
	
}
void test01(){

int a=5,b=6;
//char c='1'; 推导不出一致的类型T
//myswap(a,c);
myswap(a,b);
cout<<a<<endl<<b<<endl;

//func(); 错误，自动推导不了必须提供，函数本身没用到通用类型就随便提供一个就能用了
func<int>();
}

int main(){
	test01();

}
