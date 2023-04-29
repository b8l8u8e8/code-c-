#include<bits/stdc++.h>
using namespace std;
void printmap(map<int,int>m){
	for(map<int,int>::iterator i=m.begin();i!=m.end();i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}
int main(){
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40));
	map<int,int>::iterator i=m.find(5);
	if(i!=m.end()){
		cout<<"查到了key "<<i->first<<" value "<<i->second<<endl;
	}else{
		cout<<"未找到"<<endl;
	}
	int num=m.count(3);
	cout<<num<<endl;
	
	return 0;
}
