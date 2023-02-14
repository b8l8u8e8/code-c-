#include<bits/stdc++.h>
using namespace std;

void printlist(list<int>&l){
	
	for(list<int>::iterator i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
int compare(int a,int b){
	return a>b;
}
void test01(){
	list<int>l;
	l.push_back(20);
	l.push_back(10);
	l.push_back(40);
	l.push_back(30);
	printlist(l);
	l.reverse();
	printlist(l);
	l.sort(compare);
	printlist(l);
}
int main(){
	test01();
	
}
