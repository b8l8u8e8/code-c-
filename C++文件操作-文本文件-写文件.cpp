#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "111" << endl;
	ofs << "222" << endl;
	ofs.close();

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
