// PerfectWorldOnlineTest1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

/*Axis ����  Allies����ս�� Axisʹ��һ���ܵ���ϵ����ͬһ���������3�׼��ܷ�ʽ:
��@cipher&�� ��ʾ�ַ���cipher��ʹ�÷���1���ܹ���
��# cipher^�� ��ʾ�ַ���cipher��ʹ�÷���2���ܹ���
��$cipher%�� ��ʾ�ַ���cipher��ʹ�÷���3���ܹ���
��#c@hip&er^�� ����ϵļ��ܷ�ʽ ��ʾ ��hip��������1���ܹ��� ����ǰ���ִ��� ��c���� ��er��ƴ�Ӻ���ִ��Ǳ�����2���ܺ��
Axis�ڷ��͵籨ʱ����ϷǷ������������ƽ⣬ �籨���г��� ��@xxxx%�� ��@xx#xx&xx^�� ���ֲ�������ƥ��Ĵ����������Ķ�����Ч��
��ΪAllies���鱨��Ա������Ƴ��� ʶ�����ַ��Ƿ���Ч

����
�޿ո��ַ���

���
�ַ��� ��true����ʾ��Ч����
�ַ��� ��false�� ��ʾ��Ч����


��������
@this#is&fake^msg

�������
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

