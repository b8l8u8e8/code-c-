#ifndef LINKLIST
#define LINKLIST
typedef struct node{
	void* data;//指向任何类型的数据
	struct node* next;
}linknode;


typedef struct linklist{
	linknode *head;
	int size;
}linklist;

typedef void(*printlinknode)(void *);


//初始化链表
linklist * init_linklist();
//指定位置插入
void insert_linklist(linklist* list,int pos,void * data);
//删除指定位置的值
void removepos_linklist(linklist* list,int pos);
//获取链表的长度
int size_linklist(linklist* list);
//查找
int find_linklist(linklist* list,void * data);
//返回第一个结点
void * front_linklist(linklist* list);
//打印链表结点
void print_linklist(linklist* list,printlinknode print);
//释放链表内存
void freespace_linklist(linklist* list);


#endif
