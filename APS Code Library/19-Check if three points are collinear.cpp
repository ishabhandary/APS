
#include <bits/stdc++.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

void collinear(int x1, int y1, int x2,
			int y2, int x3, int y3)
{

	int a = x1 * (y2 - y3) +
			x2 * (y3 - y1) +
			x3 * (y1 - y2);

	if (a == 0)
		cout << "Yes";
	else
		cout << "No";
}

