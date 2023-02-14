#include<bits/stdc++.h>
using namespace std;

void test01(){
//	先进后出
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout<<"栈的大小："<<s.size()<<endl;
	while(!s.empty()){
		cout<<"栈顶元素为"<<s.top()<<endl;
		s.pop();
	}
	cout<<"栈的大小："<<s.size()<<endl;
	
	
	
}
int main(){
	test01();
	
}
