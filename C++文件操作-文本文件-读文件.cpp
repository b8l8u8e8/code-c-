#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void test01() {
	string a;
	char b[1024]={0};
fstream fs;
fs.open("test.txt",ios::in);
if(fs.is_open()==false){
	cout<<"文件打开失败"<<endl;
	return;
} 
//读数据第一种
//while(fs>>b){
//	cout<<b<<endl;
//}
//读数据第二种
//while(fs.getline(b,1024)){
//	cout<<b<<endl;
//}
//读数据第三种
//while(getline(fs,a)){
//	cout<<a<<endl;
//}
//读数据第四种(不建议)
char c;
while((c=fs.get())!=EOF){//EOF---end of file
	cout<<c;
}

fs.close();

}
int main() {
	test01();
	system("pause");
}
/*
  ios::in        打开文件进行读操作，即读取文件中的数据
  
  ios::out     打开文件进行写操作，即输出数据到文件中
  
  ios::ate    打开文件时文件指针指向文件末尾，但是你可以在文件中的任何地方写数据
  
  ios::app   打开文件不会清空数据，文件指针始终在文件末尾，因此只能在文件末尾写数据
  
  ios:trunc  默认，若打开文件已存在，测清空文件的内容
  
  ios::nocreate    若打开文件不存在则不建立，返回打开失败信息
  
  ios::noreplace  打开文件时不能覆盖，若文件存在测返回打开失败信息
  
  ios::binary          打开文件为二进制文件，否则为文本文件
 */
