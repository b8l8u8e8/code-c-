#include<iostream>
using namespace std;
class phone {
	public:
	string name;

	phone(string pname):name(pname) {
		
	}
	~phone() {
		
	}
	void YourMethodOrFunction() {
		
	}
};
class person {
	public:
	string name;
	phone pphone;
	person(string pname,string namephone):name(pname),pphone(namephone) {
		
	}
	~person() {
		
	}
	void YourMethodOrFunction() {
		
	}
};

int main(){
	person p("张三","红米");
	cout<<p.name<<" "<<p.pphone.name;
}
