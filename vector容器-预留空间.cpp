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
	int num=0;
	int *p=NULL;
	v1.reserve(100000);
	//预留100000空间，不用动态内存调整，num为0
	//不预留会重复动态扩展内存
	for(int i=0;i<100000;i++){
		v1.push_back(i);
		if(p!=&v1[0]){
			p=&v1[0];
			num++;
		}
	}
	cout<<num;

	
	
}
void test02(){

}
int main(){
	test01();
	test02();
	cout<<endl;
	system("pause");
	
}
