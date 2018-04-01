#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	stack<int> st;
	char a[150];
	for (int i = 0; i < 150; i++)
	{
		if (a[0] == 101)
			break;
		a[i] = cin.get();
		if (a[i] == 101)
		{
			a[i] = NULL;
			break;
		}
	}
	int deep=0;
	int max=0;
	int num = 1;
	if (a[0] != 101)
	{
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] == '[')
				deep += 1;
			else if (a[i] == ']')
				deep -= 1;
			if (max < deep)
				max = deep;
		}
		for (int i = 0; i < max; i++)
		{
			num = num * 2;
		}
	}
	cout << num;
	cin >> a;
}