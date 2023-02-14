#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class person{
public:
	char m_Name[64];//姓名
	int m_age;
};
ostream& operator<<(ostream &cout,person &p){
	cout<<"姓名:"<<p.m_Name<<" 年龄:"<<p.m_age;
return cout;
}
void test01(){//写文件
		fstream fs;
		fs.open("person.txt",ios::out|ios::binary);
		person p={"张2三",18};
		fs.write((char *)&p,sizeof(person));
		fs.close();
}
void test02(){//读文件
	fstream fs;
	fs.open("person.txt",ios::in|ios::binary);
	if(fs.is_open()==false){
		cout<<"打开失败"<<endl;
		return;
	}
	person p2;
	fs.read((char*)&p2,sizeof(person));
	cout<<p2<<endl;
	fs.close();
}
int main(){
//	test01();
	test02();

}
