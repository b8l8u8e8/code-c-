#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>
class person{
public:
	string m_name;
	int m_age;
	person();
	person(string name,int age):m_name(name),m_age(age){
		
	}
};
void test01(){//存放自定义数据类型
vector<person>v;
person p1("aaa",10);
person p2("bbb",20);
person p3("ccc",30);
v.push_back(p1);
v.push_back(p2);
v.push_back(p3);

for(vector<person>::iterator i=v.begin();i<v.end();i++){
	cout<<"姓名："<<i->m_name<<" 年龄："<<i->m_age<<endl;
}
}
void test02(){//存放自定义数据类型指针
	vector<person*>v;
	person p1("aaa",10);
	person p2("bbb",20);
	person p3("ccc",30);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	for(vector<person*>::iterator i=v.begin();i<v.end();i++){
		cout<<"姓名："<<(*i)->m_name<<" 年龄："<<(**i).m_age<<endl;
	}
}
int main(){
	test01();
	test02();

	
}
