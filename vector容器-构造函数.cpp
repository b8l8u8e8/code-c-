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
	print<int>(v1);
	vector<int>v2(v1.begin(),v1.end()-1);//切片，v1的begin-end给v2
	print<int>(v2);
	vector<int>v3(10,100);//10个100
	print(v3);
	vector<int>v4(v3);//拷贝
	print(v4);
}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
