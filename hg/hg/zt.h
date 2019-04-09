/****************************
* 文件名：zt.h
* 作者：陈仁志
* 描述：后宫游戏主体部分函数声明
* 创建时间：2019-04-08
* 创建人：陈仁志
****************************/
#pragma once
extern int fz_count;
extern char fz_name[8][20];
extern char level_name[5][10];
extern int fz_level[8];
extern int fz_hgd[8];
/*************************************************
Function:       print_hgqk
Description:    打印当前后宫情况


Function:       // 函数名称
Description:    // 函数功能、性能等的描述
Calls:          // 被本函数调用的函数清单
Table Accessed: // 被访问的表（此项仅对于牵扯到数据库操作的程序）
Table Updated: // 被修改的表（此项仅对于牵扯到数据库操作的程序）
Input:          // 输入参数说明，包括每个参数的作
				  // 用、取值说明及参数间关系。
Return:         // 函数返回值的说明
Others:         // 其它说明
*************************************************/
void print_hgqk();
void qgxf();