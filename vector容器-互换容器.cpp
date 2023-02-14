#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>
template<class t>
void print(vector<t>&v){
	for(vector<int>::iterator i=v.begin();i<v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

void test01(){
	vector<int>v1;
	for(int i=0;i<10;i++){
		v1.push_back(i);
	}
	print(v1);
	vector<int>v2;
	for(int i=10;i>0;i--){
		v2.push_back(i);
	}
	print(v2);
	v1.swap(v2);
	print(v1);
	print(v2);
	
	
}
void test02(){//swap调用时机
	vector<int>v(10000,0);
	cout<<"容量："<<v.capacity()<<" 大小："<<v.size()<<endl;
	v.resize(5);//当resize到5，大小是5，但是容量仍然是10000，浪费空间，用swap解决
	cout<<"容量："<<v.capacity()<<" 大小："<<v.size()<<endl;
	vector<int>(v).swap(v);
	cout<<"容量："<<v.capacity()<<" 大小："<<v.size()<<endl;
	/*
	用拷贝构造，只会拷贝大小，容量和大小是一样的，所有经过拷贝后浪费的容量就没了再赋值给它本身
	  
	*/
}
int main(){
	test01();
	test02();
	cout<<endl;
	system("pause");
	
}
