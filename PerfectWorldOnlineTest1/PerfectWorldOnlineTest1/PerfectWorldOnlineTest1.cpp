// PerfectWorldOnlineTest1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Axis 国和  Allies国交战， Axis使用一套密电体系，在同一报文中设计3套加密方式:
“@cipher&” 表示字符串cipher是使用方案1加密过的
“# cipher^” 表示字符串cipher是使用方案2加密过的
“$cipher%” 表示字符串cipher是使用方案3加密过的
“#c@hip&er^” 是组合的加密方式 表示 “hip”被方案1加密过， 加密前的字串和 ”c”与 “er”拼接后的字串是被方案2加密后的
Axis在发送电报时常混合非法报文来干扰破解， 如报文中出现 “@xxxx%” ”@xx#xx&xx^” 这种不按规则匹配的代表整个报文都是无效的
作为Allies的情报人员，请设计程序 识别报文字符是否有效

输入
无空格字符串

输出
字符串 “true”表示有效报文
字符串 “false” 表示无效报文


样例输入
@this#is&fake^msg

样例输出
false*/

int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	int index = 0;
	while (cin>>str)
	{	
		bool flag1 = true, flag2 = true, flag3 = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '@')
			{
				flag1 = false;
				for (int j = i; j < str.length(); j++)
				{
					if (str[j] == '^' || str[j] == '%')
					{
						break;
					}
					if (str[j] == '&')
					{
						flag1 = true;
						break;
					}
				}
	
			}
			if (str[i] == '#')
			{
				flag2 = false;
				for (int j = i; j < str.length(); j++)
				{
					if (str[j] == '&' || str[j] == '%')
					{
						break;
					}
					if (str[j] == '^')
					{
						flag2 = true;
						break;
					}
				}
			//	break;
			}
			if (str[i] == '$')
			{
				flag3 = false;
				for (int j = i; j < str.length(); j++)
				{
					if (str[j] == '&' || str[j] == '^')
					{
						break;
					}
					if (str[j] == '%')
					{
						flag3 = true;
						break;
					}
				}
			//	break;
			}
		}
		if (flag1 && flag2 && flag3)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
		
	}
	
	system("pause");
	return 0;
}

