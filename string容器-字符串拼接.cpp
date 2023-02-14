#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
	string str1="hello ";
	str1+="world";
	cout<<"str1:"<<str1<<endl;
	str1+='!';
	cout<<"+!str1:"<<str1<<endl;
	string str2="LOL DNF";
	cout<<"str1 +str2:"<<str1+" "+str2<<endl;
	string str3="I";
	str3.append(" love ");
	cout<<"str3:"<<str3<<endl;
	str3.append("game abcde",4);
	cout<<"str3:"<<str3<<endl;
	string str4;
	str4.append(str3,2,4);//参数二：从哪开始 参数三：截取多少字节（汉字一个两个字节）
	cout<<"str4:"<<str4<<endl;
}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
