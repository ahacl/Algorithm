#include <iostream>
using namespace std;

int MAX(int a, int b)
{
	return a > b ? a : b;
}


int main(void)
{
	int C;
	int max = 0;
	int DP[501][501];

	cin >> C;
	for (int i = 1; i <= C; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> DP[i][j];
			if (j == 1) { DP[i][j] = DP[i - 1][j] + DP[i][j]; }
			else if (j == i) { DP[i][j] = DP[i - 1][j - 1] + DP[i][j]; }
			else { DP[i][j] = MAX(DP[i - 1][j - 1], DP[i - 1][j]) + DP[i][j]; }
			if (max < DP[i][j]) max = DP[i][j];
		}
	}
	cout << max;
	return 0;
}