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
	list<int>l2(++++l1.begin(),l1.end());
	printlist(l2);
	list<int>l3(l2);
	printlist(l3);
	list<int>l4(10,200);
	printlist(l4);
	
	
}
int main(){
	test01();
	
}
