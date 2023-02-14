#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class person{
public:
	char m_Name[64];//姓名
	int m_age;
};

void test01(){
	fstream fs;
	fs.open("person.txt",ios::out|ios::binary);
	person p={"张三",18};
	fs.write((const char *)&p,sizeof(person));
	fs.close();
}
int main(){
test01();
}
