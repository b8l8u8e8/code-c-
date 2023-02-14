#include<iostream>
#include<string>
using namespace std;
class myprint{
public:
	//必须成员函数不能全局函数
	void operator()(string st){
		cout<<st;
	}
};

int main(){
	myprint pt;		
	pt("hello world");
	//匿名对象，不想创建对象，匿名使用一次没有名字，使用完释放
	myprint()("\nhello world");
}
