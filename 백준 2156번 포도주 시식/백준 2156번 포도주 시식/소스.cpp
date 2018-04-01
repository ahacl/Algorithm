#include <iostream>
using namespace std;

int MAX(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int num;

	cin >> num;
	int S[1000];
	int DP[1000];
	bool check[1000] = { false };
	S[0] = 0;
	for (int i = 1; i <= num; i++)
	{
		cin >> S[i];
		if (i == 1)
			DP[i] = S[i];
		else
			DP[i] = S[i] + S[i - 1];
	}
	for (int i = 3; i <= num; i++)
	{
		int result = 0;
		result = ()
	}
}