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
	set<int>::iterator pos=s1.find(30);
	//找到返回值的迭代器，否则返回end迭代器
	if(pos!=s1.end()){
		cout<<"找到元素"<<*pos<<endl;
	}else{
		cout<<"未找到元素"<<endl;
	}
	int num=s1.count(30);
	cout<<"30的个数为"<<num<<endl;
}
void test02(){

}
int main(){
	test01();
	test02();
	
}
