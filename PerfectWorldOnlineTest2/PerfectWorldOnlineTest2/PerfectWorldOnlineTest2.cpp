// PerfectWorldOnlineTest2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

/*������С���ѣ�ͬʱ���ռ�����ID�ŵĿ�Ƭ��������˶һ�����������������һ�룬����һ��գ�
�������һ���ý������������ǰ��Լ������ó�������Ҫ�ճ�һ�׿�Ƭ��

����
�������ݼ�Ϊ��Ƭ��ID������Ϊint����������Ϊ0��
����������ǵ�һ��С���ѵ�ID�ţ����������ɸ���
Ȼ������ڶ���С���ѵĿ�Ƭ�ţ�Ҳ���������ɸ���
����С���ѵĿ�Ƭ���м䣬����0��������
�������0��ʾ������

���
���һ��û���ظ�������С��������Ŀ�Ƭ�ţ��ո����������Ϊ����С���ѵ�����ռ������


��������
1 2 3 4 5 0 1 3 5 6 0

�������
1 2 3 4 5 6*/

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> ans;
	vector<int> a,b;
	int id;
	int times = 0;
	while (cin >> id)
	{
		if (id == 0)
		{
			times++;
		}
		ans.push_back(id);
		if (times == 2)
		{
			int index = 0;
			while (ans[index] != 0)
			{
				a.push_back(ans[index]);
				index++;
			}
			index++;
			while (ans[index] != 0)
			{
				b.push_back(ans[index]);
				index++;
			}
			int size_a = a.size();
			int size_b = b.size();
			if (size_a<size_b)
			{
				for (int i = 0; i < size_a; i++)
				{
					if (a[i] > b[b.size() - 1])
						b.push_back(a[i]);
				}
				for (int i = 0; i < b.size(); i++)
				{
					cout << b[i] << " ";
				}
			}
			else
			{
				for (int i = 0; i < size_b; i++)
				{
					if (b[i] > a[a.size() - 1])
						a.push_back(b[i]);
				}
				for (int i = 0; i < a.size(); i++)
				{
					cout << a[i] << " ";
				}
			}
			cout << endl;
			times = 0;
			a.clear();
			b.clear();
			ans.clear();
		}
	}
	
	system("pause");
	return 0;
}

