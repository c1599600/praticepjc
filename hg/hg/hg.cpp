// hg.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/****************************
* 文件名：hg.cpp
* 作者：陈仁志
* 描述：后宫游戏程序主体
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
/*
* fz_name 妃子的名称
* level_name 妃子等级的名称
* fz_level 妃子的等级
* fz_hgd 妃子的好感度
* fz_count 后宫妃子数量
*/
char fz_name[8][20] = { "于谦", "杨玉环", "貂蝉", "甄姬" };
char level_name[5][10] = { "皇后", "皇贵妃", "贵妃", "嫔妃", "答应" };
int fz_level[8] = { 0, 2, 2, 3 };
int fz_hgd[8] = { 100, 100, 100, 100 };
int fz_count = 4;

int main()
{
	/*
	* name 玩家名称 
	* choice 玩家的选择
	* 
	* 
	*/

	char name[10] = {0};
	int choice;
	//欢迎界面及游戏规则
	cout << "欢迎来到后宫游戏" << endl;
	cout << "在游戏当中，您将扮演一个君王" << endl;
	cout << "在这里，您不需要处理繁杂的朝廷事务" << endl;
	cout << "不需要担心外敌的入侵，贼寇的侵袭" << endl;
	cout << "您要做的仅仅只是保持后宫稳定" << endl;
	cout << "祝您游戏愉快" << endl;
	//用户信息录入
	cout << "陛下，请问您的名字是？" << endl;
	cin >> name;
	cout << "吾皇" << name << "登基" << endl;
	//游戏主体
	while (true) {
		//显示当前后宫情况
		print_hgqk();
		//选择操作
		while (true)
		{
			//提示并等待用户键入选择
			cout << "请" << name << "陛下选择想要执行的操作：" << endl;
			cout << "1：全国选妃" << endl;
			cout << "2：翻牌宠幸" << endl;
			cout << "3：游园赏景" << endl;
			cout << "4：打入冷宫" << endl;
			cin >> choice;
			//判断用户输入是否合法
			if (choice == 1)
			{
				qgxf();
				break;
			}
			else if (choice == 2)
			{

				break;
			}
			else if (choice == 3)
			{
				break;
			}
			else if (choice == 4)
			{
				break;
			}
			else
			{
				cout << "输入非法请重新输入" << endl;
			}
		}
		
		//操作结果
		//break;
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
