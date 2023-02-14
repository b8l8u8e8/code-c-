#include<iostream>
using namespace std;
class person{
public:
	int b;
	 void func(){ 
		 if(this==NULL){
			 return ;
		 }
		cout<<"func函数调用"<<b<<endl;
	}
	 void func2(){
		cout<<"func函数调用"<<endl;
	}

};
int main(){
	person *a=NULL;
	a->func();
	a->func2();
	
	return 0;
}

