#include<stdio.h>
#include<iostream>
#include<bitset>
using namespace std;



int main(){


//c++默认十进制输出，以下可自定义输出，如果指定cout类型，下次cout默上次类型！！！
	cout<<bitset<8>(0b0101)<<endl;//需要包含头文件bitset
	cout<<oct<<0763<<endl;
	cout<<hex<<0xab<<endl;
	
	
	return 0;
}
