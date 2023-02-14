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
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1.at(i)<<" ";
	}
	
	
}
void test02(){

}
int main(){
	test01();
	test02();
	cout<<endl;
	system("pause");
	
}
