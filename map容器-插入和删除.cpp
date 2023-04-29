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
	m.insert(make_pair(2,20));
	m[3]=30;
	m[4]=40;
	printmap(m);
	m.erase(m.begin());//按迭代器来删
	m.erase(4);//按key删
	printmap(m);
	return 0;
}
