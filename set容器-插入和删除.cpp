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
	s1.erase(s1.begin());
	printset(s1);
	s1.erase(30);
	printset(s1);
	
}
void test02(){

}
int main(){
	test01();
	test02();
	
}
