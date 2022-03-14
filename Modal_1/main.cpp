#include <iostream>
#include <queue>
#include <ctime>
#include "Quest.h"

using namespace std;

int main()
{
	queue<ReQuest*> a;
	queue<ReQuest*> answer;
	a.push(new ReQuest(1, 5));
	a.push(new ReQuest(1, 5));
	int tmp = 1;
	int per = rand() % 11 + 1;
	for (int j = 0; j < 3; j++)
	{
		a.push(new ReQuest(tmp + per, rand() % 20 + 1));
		tmp += per;
		per = rand() % 11 + 1;
	}

	int i = 1;
	bool c1 = true, c2 = true;
	int d1 = 0, d2 = 0;

	while (a.size() != 0)
	{
		if (a.front()->t_prih <= i)
		{
			if (c1)
			{
				d1 = a.front()->t_obrab;
				c1 = false;
				a.pop();
			}
		}
		
		if (a.front()->t_prih <= i)
		{
			if (c2)
			{
				d2 = a.front()->t_obrab;
				c2 = false;
				a.pop();
			}
		}

		if (d1 > 0)
			d1--;
		else
			c1 = true;

		if (d2 > 0)
			d2--;
		else
			c2 = true;

		i++;
	}

	
	cout << i << endl;
	return 0;
}