#include <iostream>
using namespace std;

int MIN(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int N;
	cin >> N;
	int color[1001][3];
	int num[1001][3];
	num[0][0] = num[0][1] = num[0][2] = color[0][0] = color[0][1] = color[0][2] = 0;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> color[i][j];
	}
	for (int i = 1; i <= N; i++)
	{
		num[i][0] = MIN(num[i - 1][1], num[i - 1][2]) + color[i][0];
		num[i][1] = MIN(num[i - 1][0], num[i - 1][2]) + color[i][1];
		num[i][2] = MIN(num[i - 1][0], num[i - 1][1]) + color[i][2];
	}
	cout << MIN(MIN(num[N][0], num[N][1]), num[N][2]);
	return 0;
}