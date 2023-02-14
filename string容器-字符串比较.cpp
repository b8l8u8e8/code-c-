#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
	string str1="aello";
	string str2="hello";
	if(str1.compare(str2)==0){
		cout<<"str1=str2"<<endl;
	}else if(str1.compare(str2)>0){
		cout<<"str1>str2"<<endl;
	}else{
		cout<<"str1<str2"<<endl;
	}
	if(str1>=str2){
		cout<<"str1>=str2"<<endl;
	}
}
void test02(){
	
}
int main(){
	test01();
	test02();
	system("pause");
	
}
