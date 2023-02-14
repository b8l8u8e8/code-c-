#include<iostream>
#include<string>
using namespace std;
class person{
public:
	int m_age;
	person(){
		m_age=0;
	}
	person(int age):m_age(age){
		
	}


};
bool operator==(person&p,person&p2){
	if(p.m_age==p2.m_age){
		return true;
	}else{
		return false;
	}
}
bool operator>(person&p,person&p2){
	if(p.m_age>p2.m_age){
		return true;
	}else{
		return false;
	}
}
bool operator<(person&p,person&p2){
	if(p.m_age<p2.m_age){
		return true;
	}else{
		return false;
	}
}
bool operator>=(person&p,person&p2){
	if(p.m_age>=p2.m_age){
		return true;
	}else{
		return false;
	}
}
bool operator<=(person&p,person&p2){
	if(p.m_age<=p2.m_age){
		return true;
	}else{
		return false;
	}
}
bool operator!=(person&p,person&p2){
	if(p.m_age!=p2.m_age){
		return true;
	}else{
		return false;
	}
}


int main(){
	person p(20);
	person p2(20);
	person p3(22);
	
	int a=(p>=p2);
	cout<<a<<endl;

	return 0;
}

