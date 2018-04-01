#include <iostream>
using namespace std;

int main(void)
{
	long long int n;
	cin >> n;
	long long int DP[100];
	DP[1] = 1;
	DP[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	cout << DP[n];
	return 0;
}