#include<iostream>
#include<string>
using namespace std;
class person{
public:
	string m_name;
	int m_age;
	person(string name,int age):m_name(name),m_age(age){
		
	}
};
//bool operator==(person&p1,person&p2){
//	if(p1.m_age==p2.m_age&&p1.m_name==p2.m_name){
//		return true;
//	}else{
//		return false;
//	}
//}
template<class T>
bool mycompare(T&a,T&b){
	if(a==b){
	return true;
	}else{
		return false;
	}
	
}
//利用具体化的person的版本来实现代码，具体化优先调用
template <>bool mycompare(person&a,person&b){
	if(a.m_age==b.m_age&&a.m_name==b.m_name){
		return true;
	}else{
		return false;
	}
	
}
void test02(){
	person p1("tom",10);
	person p2("tom",10);
	//p1==p2识别不出来，通过运算符重载或者是具体化模板
	if(mycompare(p1,p2)){
		cout<<"="<<endl;
	}else{
		cout<<"!="<<endl;
	}
}
void test01(){
	int a=10,b=20;
	if(mycompare(a,b)){
		cout<<"="<<endl;
	}else{
		cout<<"!="<<endl;
	}
}

int main(){
//	test01();
	test02();

}
