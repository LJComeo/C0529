#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include "MailList.h"

struct MailList g_allMsg[1000];//ȫ�ֱ���ǰ�� g_ ������ȫ�ֱ���
int g_count;//ȫ�ֱ���Ĭ�ϸ�0
int menu(){
	printf("1.�����ϵ����Ϣ\n");
	printf("2.ɾ����ϵ����Ϣ\n");
	printf("3.������ϵ����Ϣ\n");
	printf("4.�޸���ϵ����Ϣ\n");
	printf("5.��ʾ��ϵ����Ϣ\n");
	printf("6.�����ϵ����Ϣ\n");
	printf("������ѡ�");
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
			printf("������������������\n");
		default:
			printf("������������������\n");
		}
	}
}
int main(){

	MailList();
	system("pause");
	return 0;
}
