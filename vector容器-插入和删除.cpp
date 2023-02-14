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
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	print(v1);
	v1.pop_back();
	v1.pop_back();
	print(v1);
	v1.insert(v1.begin(),100);
	print(v1);
	v1.insert(v1.begin(),2,1000);
	print(v1);
	v1.erase(v1.begin());
	print(v1);
	v1.erase(v1.begin(),v1.begin()+2);
	print(v1);
	v1.clear();
	print(v1);
	
	
}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
