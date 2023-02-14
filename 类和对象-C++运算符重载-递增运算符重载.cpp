#include<iostream>
#include<string>
using namespace std;
class myint{
	friend ostream& operator<<(ostream &cout,myint &mit);
	friend myint& operator++(myint &i);
	friend myint operator++(myint &mit,int);
public:
	myint(){
		i=0;
	}
private:
	int i;
};
//<<运算符重载
ostream& operator<<(ostream &cout,myint &mit){
	cout<<mit.i;
	return cout;
}
//前置++运算符重载
myint& operator++(myint &mit){
	mit.i=mit.i+1;
	return mit;
}
//后置++运算符重载--int占位参数区分前置还是后置
myint operator++(myint &mit,int){
	myint temp=mit;
	mit.i++;
	return temp;
	
	
}
int main(){
	myint i;
	myint p=i++;	
	cout<<p<<endl;
	cout<<i<<endl;
//	cout<<i++<<endl;
	
	
	return 0;
}

