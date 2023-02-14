#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<vector>


int main(){
	
	int n;
	cin>>n;
	string a[n],old;
	cin>>old;
	getchar();
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,a[i]);
		if(i==n-1){
			a[i]+='\0';
		}
	}
	for(int i=0;i<n;i++){
		if(a[i].substr(0,1)=="1"){
			old=old.append(a[i].substr(2));
			cout<<old;
		}else if(a[i].substr(0,1)=="2"){
			old=old.substr(stoi(a[i].substr(2,1)),stoi(a[i].substr(4,1)));
			cout<<old;
		}else if(a[i].substr(0,1)=="3"){
			old=old.insert(stoi(a[i].substr(2,1)),a[i].substr(4,a[i].size()-5));
			cout<<old;
		}else if(a[i].substr(0,1)=="4"){
			//cout<<"size"<<a[i].size()<<endl;
			if(old.find(a[i].substr(2,a[i].size()-3))==string::npos){
				cout<<-1;
			}else{
				cout<<old.find(a[i].substr(2,a[i].size()-3));
			}			
			
		}
		if(i!=n-1){
			cout<<endl;
		}
		
	}
}


