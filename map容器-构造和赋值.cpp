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
	//和set一样，按照key排序 ，底层二叉树
	printmap(m);
	map<int,int>m2(m);
	printmap(m2);
	map<int,int>m3;
	m3=m;
	printmap(m3);
}
int main(){
	test01();
	return 0;
}
