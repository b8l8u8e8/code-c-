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
	v2=v1;
	print(v2);
	vector<int>v3;
	v3.assign(v1.begin(),v1.end());
	print(v3);
	vector<int>v4;
	v4.assign(10,100);
	print(v4);
	
	
}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
