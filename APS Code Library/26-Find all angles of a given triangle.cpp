#include <iostream>
#include <utility> 
#include <cmath> 
using namespace std;

#define PI 3.1415926535

int lengthSquare(pair<int,int> X, pair<int,int> Y)
{
	int xDiff = X.first - Y.first;
	int yDiff = X.second - Y.second;
	return xDiff*xDiff + yDiff*yDiff;
}

void printAngle(pair<int,int> A, pair<int,int> B,pair<int,int> C)
{
	int a2 = lengthSquare(B,C);
	int b2 = lengthSquare(A,C);
	int c2 = lengthSquare(A,B);

	float a = sqrt(a2);
	float b = sqrt(b2);
	float c = sqrt(c2);

	float alpha = acos((b2 + c2 - a2)/(2*b*c));
	float betta = acos((a2 + c2 - b2)/(2*a*c));
	float gamma = acos((a2 + b2 - c2)/(2*a*b));

	alpha = alpha * 180 / PI;
	betta = betta * 180 / PI;
	gamma = gamma * 180 / PI;

	cout << "alpha : " << alpha << endl;
	cout << "betta : " << betta << endl;
	cout << "gamma : " << gamma << endl;
}

