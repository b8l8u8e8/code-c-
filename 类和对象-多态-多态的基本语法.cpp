#include<iostream>
#include<string>
using namespace std;

class animal{
public:
	virtual void speak(){
		cout<<"动物在说话"<<endl;
	}
};
class cat:public animal{
public:
//	重写：函数返回值类型 函数名 参数列表完全相同
//	重载 函数名相同，返回类型相同 参数列表不同
	void speak(){
		cout<<"小猫在说话"<<endl;
	}
};
//父类可以接收子类类型
//地址早绑定，编译阶段就确定了函数的地址
//进行地址晚绑定，在运行中绑定
/*
动态多态满足条件：
1.满足继承关系
2.子类重写父类的虚拟函数
  
  动态多态使用
  父类的指针或引用 执行于类对象
*/

void dospeak(animal &anima){
	anima.speak();
}
void test01(){
	cat ct;
	dospeak(ct);

	
}
int main(){
test01();
}
