
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

pair<int, int> getReducedForm(int dy, int dx)
{
	int g = gcd(abs(dy), abs(dx));

	bool sign = (dy < 0) ^ (dx < 0);

	if (sign)
		return make_pair(-abs(dy) / g, abs(dx) / g);
	else
		return make_pair(abs(dy) / g, abs(dx) / g);
}

int minLinesToCoverPoints(int points[][2], int N,int xO, int yO)
{
	set< pair<int, int> > st;
	pair<int, int> temp;
	int minLines = 0;

	for (int i = 0; i < N; i++)
	{
		int curX = points[i][0];
		int curY = points[i][1];

		temp = getReducedForm(curY - yO, curX - xO);

		if (st.find(temp) == st.end())
		{
			st.insert(temp);
			minLines++;
		}
	}

	return minLines;
}

