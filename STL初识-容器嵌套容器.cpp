#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>

void test01(){
vector<vector<int>>v;
vector<int>v1;
vector<int>v2;
vector<int>v3;
for(int i=0;i<3;i++){
	v1.push_back(i+1);
	v2.push_back(i+2);
	v3.push_back(i+3);
}
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
for(vector<vector<int>>::iterator i=v.begin();i<v.end();i++){
	for(vector<int>::iterator i2=i->begin();i2<i->end();i2++){
		cout<<*i2<<endl;
	}
}


}
void test02(){

}
int main(){
	test01();
	test02();
	system("pause");
	
}
