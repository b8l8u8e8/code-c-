#include<bits/stdc++.h>
using namespace std;

void printset(set<int>&s){
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
void printmultiset(multiset<int>&s){
	for(multiset<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

void test01(){
	set<int>s1;
	pair<set<int>::iterator,bool>ret=s1.insert(10);
	if(ret.second==true){
		cout<<"插入成功"<<endl;
	}else{
		cout<<"插入失败"<<endl;
	}
	ret=s1.insert(10);
	if(ret.second==true){
		cout<<"插入成功"<<endl;
	}else{
		cout<<"插入失败"<<endl;
	}
	multiset<int>m1;
	m1.insert(20);
	m1.insert(10);
	m1.insert(10);
	printmultiset(m1);
}
void test02(){

}
int main(){
	test01();
	test02();
	
}
