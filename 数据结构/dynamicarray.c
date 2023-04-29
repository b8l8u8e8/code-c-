#include"dynamicarray.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//初始化
dynamic_array *dynamic_array_init(){
	dynamic_array * myarray=(dynamic_array*)malloc(sizeof(dynamic_array));
	myarray->size =0;
	myarray->capacity=20;
	myarray->paddr=(int *)malloc(myarray->capacity*sizeof(int));
	return myarray;
}
//插入
void pushback_array(dynamic_array *arr,int value){
	if(arr==NULL){
		return;
	}
	if(arr->size==arr->capacity){
		//申请空间 新空间是旧空间的2倍
		arr->paddr=(int *)realloc(arr->paddr,arr->size*2*sizeof(int));	
		arr->capacity*=2;
	}
	//插入新元素
	arr->paddr[arr->size]=value;
	arr->size++;
}
//位置删除
void removepos_array(dynamic_array *arr,int pos){
	if(arr==NULL){
		return;
	}
	if(pos<0||pos>=arr->size){
		return;
	}
	for(int i=pos;i<arr->size-1;i++){
		arr->paddr[i]=arr->paddr[i+1];
	}
	arr->size--;
}
//查找
int find_array(dynamic_array *arr,int value){
	if(arr==NULL){
		return -1;
	}
	for(int i=0;i<arr->size;i++){
		if(arr->paddr[i]==value){
			return i;
		}
	}
	return -1;
}
//值删除
void removevalue_array(dynamic_array *arr,int value){
	if(arr==NULL){
		return;
	}
	int i=find_array(arr,value);
	removepos_array(arr,i);
}
//打印
void print_array(dynamic_array *arr){
	for(int i=0;i<arr->size;i++){
		printf("%d ",arr->paddr[i]);
	}
	printf("\n");
}
//释放动态数组的内存
void freespace_array(dynamic_array *arr){
	if(arr==NULL){
		return;
	}
	if(arr->paddr!=NULL){
		free(arr->paddr);
	}
	free(arr);
}
//清空数组
void clear_array(dynamic_array *arr){
	if(arr==NULL){
		return;
	}
	arr->size=0;
	
}
//获取动态数组容量
int capacity_array(dynamic_array *arr){
	if(arr==NULL){
		return -1;
	}
	return arr->capacity;
}
//获取动态数组元素个数
int size_array(dynamic_array *arr){
	if(arr==NULL){
		return -1;
	}
	return arr->size;
}
//根据某位置获得某位置元素
int get_array(dynamic_array *arr,int pos){
//	if(arr==NULL ||pos>=arr->size){
//		return -1;
//	}
	return arr->paddr[pos];
}
