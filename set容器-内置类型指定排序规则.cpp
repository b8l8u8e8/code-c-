#include<bits/stdc++.h>
using namespace std;
class mycompare{
public:	
	bool operator()(int v1,int v2)const{	
		return v1>v2;
	}
};
void printset(set<int>s){
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
void printset(set<int,mycompare>s){
	for(set<int,mycompare>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}


void test01(){
	set<int>s1;
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(10);
	printset(s1);
	//指定排序规则从大到小
	set<int,mycompare>s2;
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(10);
	printset(s2);
	
	
}

int main(){
	test01();
	return 0;
}
