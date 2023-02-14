#include<bits/stdc++.h>
using namespace std;

void printset(set<int>&s){
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

void test01(){
	set<int>s;
	//插入数据只有insert方式
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	s.insert(30);
	//插入时自动升序，重复元素不计入
	printset(s);
	set<int>s2(s);
	printset(s2);
	set<int>s3;
	s3=s2;
	printset(s3);
}
int main(){
	test01();
	
}
