#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
	string s1;//默认构造
	cout<<s1<<endl;
	const char * str="hello world";
	string s2(str);//有参构造
	cout<<s2<<endl;
	string s3(s2);//拷贝构造
	cout<<s3<<endl;
	string s4(10,'a');//有参构造
	cout<<s4<<endl;
}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
