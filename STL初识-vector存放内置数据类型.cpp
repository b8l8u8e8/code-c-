#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>
void myprint(int val){
	cout<<val<<endl;
}
void test01(){
	vector<int>v;
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
//	//通过迭代器访问容器的数据
//	//起始迭代器 指向容器中的第一个元素
//	vector<int>::iterator itBegin =v.begin();
//	//起始迭代器 指向容器中的最后一个元素的下一个位置
//	vector<int>::iterator itEnd =v.end();
////	第一种遍历方式
//	while(itBegin!=itEnd){
//		cout<<*itBegin<<endl;
//		itBegin++;
//	}
//  第二种

for(vector<int>::iterator it=v.begin();it!=v.end();it++){
	cout<<*it<<endl;
}
//	第三种	利用STL提供遍历算法
for_each(v.begin(),v.end(),myprint);
}

int main(){
	test01();

	
}
