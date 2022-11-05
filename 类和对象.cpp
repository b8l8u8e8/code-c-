#include<iostream>
using namespace std;
#define PI 3.14

class circle {
	
public:
	int r;
	//ces
	float zc() {
		return 2*PI*r;
	}
};

int main(){
	circle c1;
	c1.r=10;
cout<<	c1.zc()<<endl;

	
	return 0;
}
