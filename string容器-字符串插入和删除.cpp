#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
	string str1="hello";
	str1.insert(1,"12");
	cout<<str1<<endl;
	str1.insert(5,3,'a');
	cout<<str1<<endl;
	str1.erase(5,2);
	cout<<str1<<endl;
}
void test02(){
	
}
int main(){
	test01();
	test02();
	system("pause");
	
}
