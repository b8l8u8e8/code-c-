#include<iostream>
#include<string>
using namespace std;
class base{
public:
	base(){
		cout<<"base构造"<<endl;
	}
	~base(){
		cout<<"base析构"<<endl;
	}
};
class son :public base{
public:
	son(){
		cout<<"son构造"<<endl;
	}
	~son(){
		cout<<"son析构"<<endl;
	}
};

int main(){
//构造先有父亲再有儿子，析构先儿子后父亲
	son b;
}
