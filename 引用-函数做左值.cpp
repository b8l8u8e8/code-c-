#include<iostream>
using namespace std;
int& hanshuzuozhi();
int main(){
	int &ret=hanshuzuozhi();
cout<<ret<<endl;
hanshuzuozhi()=100;
cout<<ret<<endl;
	return 0;
}
int& hanshuzuozhi(){
	static int a=10;
	return a;
}

