#include<iostream>
#include<string>
using namespace std;
class basement{
public:
	void headweb(){
		cout<<"公共部分"<<endl;
	}
	
};
class cpp:public basement{
public:
	void web(){
		cout<<"c++"<<endl;
	}
};
class python:public basement{
public:
	void web(){
		cout<<"python"<<endl;
	}
};
//继承的成员函数名和自己本来的成员函数名重复用自己的
int main(){
	cpp cp;
	cp.headweb();
	cp.web();
	python py;
	py.headweb();
	py.web();
}
