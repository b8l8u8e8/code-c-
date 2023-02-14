#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
	string str1="abcde";
	int pos=str1.find("de");
	cout<<"pos="<<pos<<endl;//有返回位置，没有返回-1

}
void test02(){
	string str1="abcde";
	str1.replace(1,3,"1111");
	cout<<"str1="<<str1<<endl;
}
int main(){
	test01();
	test02();
	system("pause");
	
}
