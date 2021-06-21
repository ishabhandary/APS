
#include <iostream>
using namespace std;
int getSum(string str)
{
	int sum = 0;

	// Traversing through the string
	for (int i = 0; i < str.length(); i++) {
		// Since ascii value of
		// numbers starts from 48
		// so we subtract it from sum
		sum = sum + str[i] - 48;
	}
	return sum;
}

// Driver Code
int main()
{
	string st = "123456789123456789123422";
	cout << getSum(st);
	return 0;
}
