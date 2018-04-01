#include <iostream>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	int DP[1000] = { 0 };
	int n;
	int arr[100];
	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		for (int j = 4; j <= n; j++)
		{
			DP[j] = DP[j - 1] + DP[j - 2] + DP[j - 3];
		}
		arr[i] = DP[n];
	}
	for (int i = 0; i < T; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}