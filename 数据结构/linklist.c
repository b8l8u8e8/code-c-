#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
//初始化链表
linklist * init_linklist(){
	linklist * list=(linklist *)malloc(sizeof(linklist));
	list->size=0;
	list->head=(linknode *)malloc(sizeof(linknode));
	list->head->next=NULL;
	list->head->data=NULL;
	return list;
}
//指定位置插入
void insert_linklist(linklist* list,int pos,void * data){
	if(list==NULL){
		return;
	}
	if(data==NULL){
		return;
	}
	if(pos<0||pos>=list->size){
		return;
	}
	linknode *newnode=(linknode *)malloc(sizeof(linknode));
	newnode->data=data;
	newnode->next=NULL;
	int cnt=0;
	linknode *pcurrent=list->head;
	while(pcurrent!=NULL){
		if(cnt==pos){
			newnode->next=pcurrent->next;
			pcurrent->next=newnode;
			list->size++;
		}
		pcurrent=pcurrent->next;
		cnt++;
	}
}
//删除指定位置的值
void removepos_linklist(linklist* list,int pos){
	if(list==NULL){
		return;
	}
	if(pos<0||pos>list->size){
		return;
	}
	linknode *pcurrent=list->head;
	for(int i=0;i<pos;i++){
		pcurrent=pcurrent->next;
	}
	linknode* pdel=pcurrent->next;
	pcurrent->next=pdel->next;
	free(pdel);
	list->size--;
}
//获取链表的长度
int size_linklist(linklist* list){
	return list->size;
}
//查找
int find_linklist(linklist* list,void * data){
	if(list==NULL){
		return -1;
	}
	if(data==NULL){
		return -1;
	}
	linknode *pcurrent=list->head->next;
	int i=0;
	while(pcurrent!=NULL){
		if(pcurrent->data==data){
		break;
		}
		i++;
		pcurrent=pcurrent->next;
	}
	return i;
	
}
//返回第一个结点
void * front_linklist(linklist* list){
	return list->head->next;
}
//打印链表结点
void print_linklist(linklist* list,printlinknode print){
	if(list==NULL){
		return;
	}
	linknode* pcurrent=list->head->next;
	while(pcurrent!=NULL){
		print(pcurrent->data);
		pcurrent=pcurrent->next;
	}
}
//释放链表内存
void freespace_linklist(linklist* list){
	if(list==NULL){
		return;
	}
	linknode *pcurrent=list->head;
	while(pcurrent!=NULL){
		linknode *pnext=pcurrent->next;
		free(pcurrent);
		pcurrent=pnext;
	}
	list->size=0;
	free(list);
}

