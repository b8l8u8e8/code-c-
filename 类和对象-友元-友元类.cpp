#include<iostream>
#include<string>
using namespace std;
class building{
	friend class friendgay;//在friendgay类访问building类的private等私有成员，外面的函数不行，只能friendgay类
public:
	string bedroom;
	building(){
		bedroom="卧室";
		sittingroom="客厅";
	}
	
private:
	string sittingroom;
	
};
class friendgay{
public:
	building *p;
	friendgay();
	void visit(){
		
		cout<<p->bedroom<<endl;
		cout<<p->sittingroom<<endl;
	}
};
friendgay::friendgay(){
	building a;
	p=new building;
}

int main(){
friendgay b;
b.visit();
	return 0;
}

