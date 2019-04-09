/****************************
* 文件名：zt.h
* 作者：陈仁志
* 描述：后宫游戏主体部分函数实现
* 创建时间：2019-04-08
* 创建人：陈仁志
****************************/
#include "zt.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;


void print_hgqk() {
	printf("%-8s%-8s%-8s\n", "名称", "等级", "好感度");
	for (int i = 0; i < fz_count; i++)
	{
		printf("%-8s%-8s%-8d\n", fz_name[i], level_name[fz_level[i]], fz_hgd[i]);
	}
}

void qgxf() {
	//判断是否能够选妃成功
	if (fz_count < 8)
	{
		//能够成功纳妃
		cout << "陛下想纳的妃子是？" << endl;
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
		//选妃失败
		cout << "后宫暴动，选妃失败" << endl;
		for (int i = 0; i < fz_count; i++)
		{
			fz_hgd[i] -= 10;
		}
	}
}