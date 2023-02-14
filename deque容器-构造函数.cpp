#include<iostream>
#include<string>
using namespace std;
#include<deque>
void printdeque(const deque<int>&d){
	for(int i=0;i<d.size();i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;
}


void test01(){
	deque<int>d1;
	
	for(int i=0;i<10;i++){
		d1.push_back(i);
	}
	printdeque(d1);
	deque<int>d2(d1.begin()+3,d1.end()-3);
	printdeque(d2);
	deque<int>d3(10,100);
	printdeque(d3);
	deque<int>d4(d3);
	printdeque(d4);
	
	
}
void test02(){

}
int main(){
	test01();
	test02();
	cout<<endl;
	system("pause");
	
}
