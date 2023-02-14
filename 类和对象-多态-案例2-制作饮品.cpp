#include<iostream>
#include<string>
using namespace std;
//制作饮品
class abstractdrinking{
public:
	//煮水
	virtual void boil()=0;
	//冲泡
	virtual void brew()=0;
	//倒入杯中
	virtual void pourincup()=0;
	//加入辅料
	virtual void putsomething()=0;
	//制作饮品
	void makedrink(){
		boil();
		brew();
		pourincup();
		putsomething();
	}
};
class coffee:public abstractdrinking{
	//煮水
	virtual void boil(){
		cout<<"煮农夫山泉"<<endl;
	}
	//冲泡
	virtual void brew(){
		cout<<"冲泡咖啡"<<endl;
	}
	//倒入杯中
	virtual void pourincup(){
		cout<<"倒入杯子"<<endl;
	}
	//加入辅料
	virtual void putsomething(){
		cout<<"加入糖和牛奶"<<endl;
	}
};
class tea:public abstractdrinking{
	//煮水
	virtual void boil(){
		cout<<"煮矿泉水"<<endl;
	}
	//冲泡
	virtual void brew(){
		cout<<"冲泡茶叶"<<endl;
	}
	//倒入杯中
	virtual void pourincup(){
		cout<<"倒入杯子"<<endl;
	}
	//加入辅料
	virtual void putsomething(){
		cout<<"加入枸杞"<<endl;
	}
};
void dowork(abstractdrinking *p){
	p->makedrink();
	delete p;
}
void test01(){
//制作茶叶
dowork(new tea);
//制作咖啡
dowork(new coffee);
}
int main(){
	test01();
}
