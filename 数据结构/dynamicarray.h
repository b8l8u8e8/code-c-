#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//动态增长内存，将存放数据的内存放到堆上
typedef struct dynamicarray{
	int *paddr;//存放数据的地址
	int size;//多少个元素
	int capacity;//容量
}dynamic_array;

//初始化
dynamic_array *dynamic_array_init();
//插入
void pushback_array(dynamic_array *arr,int value);
//位置删除
void removepos_array(dynamic_array *arr,int pos);
//值删除
void removevalue_array(dynamic_array *arr,int value);
//查找
int find_array(dynamic_array *arr,int value);
//打印
void print_array(dynamic_array *arr);
//释放动态数组的内存
void freespace_array(dynamic_array *arr);
//清空数组
void clear_array(dynamic_array *arr);
//获取动态数组容量
int capacity_array(dynamic_array *arr);
//获取动态数组元素个数
int size_array(dynamic_array *arr);
//根据某位置获得某位置元素
int get_array(dynamic_array *arr,int pos);
#endif
