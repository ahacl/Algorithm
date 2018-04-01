#include <iostream>
using namespace std;

int MIN(int x, int y)
{
	return x > y ? y : x;
}

int main(void)
{
	int DP[100000];
	DP[0] = DP[1] = 0;
	int num;
	cin >> num;
	int i;
	for (i = 2; i <= num; i++)
	{
		DP[i] = DP[i - 1] + 1;
		if (i % 2 == 0)
			DP[i] = MIN(DP[i], DP[i / 2] + 1);
		if (i % 3 == 0)
			DP[i] = MIN(DP[i], DP[i / 3] + 1);
	}
	cout << DP[num];
	return 0;
}