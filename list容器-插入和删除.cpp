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
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);
	printlist(l1);
	l1.pop_back();
	l1.pop_front();
	printlist(l1);
	l1.insert(++l1.begin(),1000);
	printlist(l1);
	l1.erase(l1.begin());
	printlist(l1);
	l1.remove(10);
	//删除所有的10
	printlist(l1);
	l1.clear();
	printlist(l1);
}
int main(){
	test01();
	
}
