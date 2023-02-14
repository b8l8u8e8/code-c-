#include<bits/stdc++.h>
using namespace std;

void test01(){
	queue<int>q;	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	cout<<"队列大小:"<<q.size()<<endl;
	cout<<q.front()<<" "<<q.back()<<endl;
	q.pop();
	cout<<q.front()<<" "<<q.back()<<endl;
	cout<<"队列大小:"<<q.size()<<endl;
}
int main(){
	test01();
	
}
