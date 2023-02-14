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
	if(v1.empty()){
		cout<<"容器v1为空";
	}else{
		cout<<"容器v1不为空"<<endl;
		cout<<"容量："<<v1.capacity()<<" 大小："<<v1.size()<<endl;
	}
	v1.resize(6,2);
	//比原来大扩容，多的赋值为参数二
	//比原来小超出容器的元素被删除，容量不变
	print(v1);
	cout<<"容量："<<v1.capacity()<<" 大小："<<v1.size()<<endl;
	
	
	
}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
