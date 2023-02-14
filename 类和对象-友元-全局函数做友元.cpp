#include<iostream>
#include<string>
using namespace std;
//private类外不能访问，函数做友元后函数里面就可以访问私有了
class building{
	friend void test();
public:
	string bedroom;
	building(){
		bedroom="卧室";
		sittingroom="客厅";
	}
	
private:
	string sittingroom;

};
void test(){
	building a;
	building *p=&a;
	cout<<p->bedroom<<endl;
	//	cout<<p->sittingroom<<endl; 指针访问不了私有
//	在类中声明friend后就可以了
	cout<<p->sittingroom<<endl;
}
int main(){
test();
	
	return 0;
}

