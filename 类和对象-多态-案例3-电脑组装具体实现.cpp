#include<iostream>
#include<string>
using namespace std;
class cpu{
public:
	virtual void calculate()=0;	
};
class videocard{
public:
	virtual void display()=0;		
};
class memory{
public:
	virtual void storage()=0;		
};
class  inter:public cpu,public videocard,public memory{
	virtual void calculate(){
		cout<<"intercpu正在计算"<<endl;
	}
	virtual void display(){
		cout<<"inter显卡正在显示"<<endl;
	}
	virtual void storage(){
		cout<<"inter内存条正在储存"<<endl;
	}
		
		
};
class lenovo:public cpu,public videocard,public memory{
	virtual void calculate(){
		cout<<"lenovocpu正在计算"<<endl;
	}
	virtual void display(){
		cout<<"lenovo显卡正在显示"<<endl;
	}
	virtual void storage(){
		cout<<"lenovo内存条正在储存"<<endl;
	}
};
class computer{
public:
	void compose(cpu&c,videocard&v,memory&m){
		c.calculate();
		v.display();
		m.storage();

	}
};
void test01(){
computer a,b,c;
inter iter;
lenovo lnv;
a.compose(iter,iter,iter);
b.compose(lnv,iter,lnv);
c.compose(lnv,iter,iter);

}
int main(){
	test01();
	system("pause");
}
