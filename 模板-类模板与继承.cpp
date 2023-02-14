#include<iostream>
#include<string>
using namespace std;
template<class T>
class base{
public:
	T a;
};
//继承模板不告诉编译器通用数据是哪个编译器不知道对应的分配多少内存
//class son:public base{
//public:
//	
//};
class son:public base<int>{
public:
	
};
//如果想让儿子也能通用数据类型，需要类模板继承类模板
template<class t>
class son2:public base<t>{
public:
};
void test01(){

}

int main(){
	test01();
}
