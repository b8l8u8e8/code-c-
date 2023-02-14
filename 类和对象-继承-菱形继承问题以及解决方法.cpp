#include<iostream>
#include<string>
using namespace std;
//动物类
class animal{
public:
	int m_age;
	animal(){
		m_age=18;
	}
};
//利用虚拟继承，解决菱形继承的问题
//继承之前 加上关键字virtual变成虚拟继承
//animal类称为虚基类
//虚拟继承后只有一份了
//羊类
class sheep:virtual public animal{

};
//驼类
class tuo:virtual public animal{

};
//羊驼类
class sheeptuo:public sheep,public tuo{
	
};

void test01(){
	sheeptuo st;
	//菱形继承两个父类有相同数据，继承两个父类数据相同，浪费
	cout<<"sheeptuo-sheep:"<<st.sheep::m_age<<endl;
	cout<<"sheeptuo-tuo:"<<st.tuo::m_age<<endl;
}
void test02(){
	sheeptuo st;
	cout<<st.m_age<<endl;//虚拟继承后只有一份也没有父类二义性了
	st.sheep::m_age=29;
	st.tuo::m_age=30;
	cout<<st.m_age<<endl;
	//可以发现只有一份了
}


int main(){
//test01();
test02();

}
