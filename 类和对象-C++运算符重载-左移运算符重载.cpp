#include<iostream>
#include<string>
using namespace std;

class person{
	friend ostream& operator<<(ostream &out,person &p);
public:
	
	person();
	person(int a,int b):m_a(a),m_b(b){
		
	}
private:
	int m_a;
	int m_b;
};
ostream& operator<<(ostream &out,person &p){
	cout<<"p.m_a="<<p.m_a<<endl<<"p.m_b="<<p.m_b<<endl;
	return out;//返回本身cout<<<<<<<可以连续加<<输出就是返回了本身--链式结构
}

int main(){
	person a(10,20);
	cout<<a<<endl;
	
	
	return 0;
}
