/****************************
* �ļ�����zt.h
* ���ߣ�����־
* ����������Ϸ���岿�ֺ���ʵ��
* ����ʱ�䣺2019-04-08
* �����ˣ�����־
****************************/
#include "zt.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;


void print_hgqk() {
	printf("%-8s%-8s%-8s\n", "����", "�ȼ�", "�øж�");
	for (int i = 0; i < fz_count; i++)
	{
		printf("%-8s%-8s%-8d\n", fz_name[i], level_name[fz_level[i]], fz_hgd[i]);
	}
}

void qgxf() {
	//�ж��Ƿ��ܹ�ѡ���ɹ�
	if (fz_count < 8)
	{
		//�ܹ��ɹ�����
		cout << "�������ɵ������ǣ�" << endl;
		cin >> fz_name[fz_count];
		fz_level[fz_count] = 4;
		fz_hgd[fz_count] = 100;
		for (int i = 0; i < fz_count; i++)
		{
			fz_hgd[i] -= 20;
		}
		fz_count++;
		
	}
	else
	{
		//ѡ��ʧ��
		cout << "�󹬱�����ѡ��ʧ��" << endl;
		for (int i = 0; i < fz_count; i++)
		{
			fz_hgd[i] -= 10;
		}
	}
}