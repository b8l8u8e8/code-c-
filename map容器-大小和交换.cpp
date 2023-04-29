#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,int>m){
	for(map<int,int>::iterator i=m.begin();i!=m.end();i++){
		cout<<"key: "<<i->first<<" value:"<<i->second<<endl;
	}
	
}
void test01(){
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(4,40));
	if(m.empty()){
		cout<<"m为空"<<endl;
	}else{
		cout<<"m不为空"<<endl;
		cout<<"m大小为"<<m.size()<<endl;
	}
}
void test02(){
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(2,20));
	map<int,int>m2;
	m2.insert(pair<int,int>(1,100));
	m2.insert(pair<int,int>(3,300));
	m2.insert(pair<int,int>(2,200));
	m.swap(m2);
	printmap(m);
	printmap(m2);
}
int main(){
	test01();
	test02();
	return 0;
}
