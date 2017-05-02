// PerfectWorldOnlineTest2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

/*有两个小朋友，同时在收集带有ID号的卡片，想凑齐了兑换奖励。后来两个人一想，不如一起凑，
如果齐了一起拿奖励。于是他们把自己的牌拿出来，想要凑成一套卡片。

输入
输入数据即为卡片的ID，类型为int，但不可能为0。
首先输入的是第一个小朋友的ID号，可能有若干个。
然后输入第二个小朋友的卡片号，也可能有若干个。
两个小朋友的卡片号中间，输入0代表间隔。
最后输入0表示结束。

输出
输出一套没有重复、并从小到大排序的卡片号，空格做间隔。作为两个小朋友的最后收集结果。


样例输入
1 2 3 4 5 0 1 3 5 6 0

样例输出
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

