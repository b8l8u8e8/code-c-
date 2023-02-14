#include<bits/stdc++.h>
using namespace std;

void printlist(list<int>&l){
	
	for(list<int>::iterator i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
void test01(){
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist(l1);
	if(l1.empty()){
		cout<<"l1为空"<<endl;
	}else{
		cout<<"l1不为空"<<endl;
		cout<<"l1的元素个数为"<<l1.size()<<endl;
	}
	l1.resize(10,2);
	printlist(l1);
	l1.resize(2);
	cout<<"l1的元素个数为"<<l1.size()<<endl;
	printlist(l1);
	
	
	
}
int main(){
	test01();
	
}
