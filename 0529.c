#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include "MailList.h"

struct MailList g_allMsg[1000];//全局变量前加 g_ 代表是全局变量
int g_count;//全局变量默认给0
int menu(){
	printf("1.添加联系人信息\n");
	printf("2.删除联系人信息\n");
	printf("3.查找联系人信息\n");
	printf("4.修改联系人信息\n");
	printf("5.显示联系人信息\n");
	printf("6.清空联系人信息\n");
	printf("请输入选项：");
	int tmp = 0;
	int ret;
	ret = scanf("%d", &tmp);
	return ret ? tmp : -1;

}
void MailList(){
	int op;
	while (1){
		op = menu();
		switch (op){
		case ADD_MSG:
			inputData();
			break;
		case DELETE_MSG :
			break;
		case SCARCH_MSG :
			break;
		case CHANGE_MSG :
			break;
		case DISPLAY_MSG :
			outputData();
			break;
		case EMPTY_MSG :
			break;
		case -1:
			printf("输入有误，请重新输入\n");
		default:
			printf("输入有误，请重新输入\n");
		}
	}
}
int main(){

	MailList();
	system("pause");
	return 0;
}
