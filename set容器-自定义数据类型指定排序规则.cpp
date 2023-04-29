#include<bits/stdc++.h>
using namespace std;
class person{
public:
	string m_name;
	int m_age;
	person(string name ,int age):m_name(name),m_age(age){
		
	}
};
class compare{
public:
	bool operator()(person p1,person p2)const{
		return p1.m_age>p2.m_age;
	}
};
template<class t,class t2>
void printset(set<t,t2> s){
	for(typename set<t,t2>::iterator i=s.begin();i!=s.end();i++){
		cout<<i->m_name<<" "<<i->m_age;
		cout<<endl;
	}
	
}



void test01(){
	person p1("刘备",24);
	person p2("关羽",26);
	person p3("张飞",23);
	person p4("赵云",80);
	set<person,compare>s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	printset<person,compare>(s);
	
	
}

int main(){
	test01();
	return 0;
}
