#include<bits/stdc++.h>
using namespace std;

void printset(set<int>&s){
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

void test01(){
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printset(s1);
	if(s1.empty()){
		cout<<"s1为空"<<endl;
	}else{
		cout<<"s1不为空"<<endl;
		cout<<"s1的大小为："<<s1.size()<<endl;
	}
	
}
void test02(){
	set<int>s1;
	set<int>s2;
	s1.insert(100);
	s1.insert(300);
	s1.insert(200);
	s1.insert(400);
	s2.insert(10);
	s2.insert(30);
	s2.insert(20);
	s2.insert(40);
	s1.swap(s2);
	printset(s1);
	printset(s2);
	
}
int main(){
	test01();
	test02();
	
}
