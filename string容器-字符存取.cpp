#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
	string str1="hello";
	cout<<"str1="<<str1<<endl;
	//1.通过[]访问单个字符
	for(int i=0;i<str1.size();i++){
		cout<<str1[i]<<" ";
	}
	cout<<endl;
	str1[3]='h';//修改
	//2.通过at方式访问单个字符
	for(int i=0;i<str1.size();i++){
		cout<<str1.at(i)<<" ";
	}
	cout<<endl;
	
}
void test02(){
	
}
int main(){
	test01();
	test02();
	system("pause");
	
}
