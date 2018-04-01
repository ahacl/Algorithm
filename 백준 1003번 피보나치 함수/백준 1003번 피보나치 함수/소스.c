/*#include <iostream>
using namespace std;

int n0, n1;

int fibonacci(int n)
{
	if (n == 0) {
		n0 += 1;
		return 0;
	}
	else if (n == 1) {
		n1 += 1;
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(void)
{
	int num;
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> num;
		n0 = 0; n1 = 0;
		fibonacci(num);
		cout << n0 << n1 << endl;
	}
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int zero, one;

int fibonacci(int n) {
	if (n == 0) {
		zero++;
		return 0;
	}
	else if (n == 1) {
		one++;
		return 1;
	}
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int T; //testCase
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++) {
		zero = 0; one = 0;
		int temp;

		scanf_s("%d", &temp);
		fibonacci(temp);
		printf("%d %d\n", zero, one);
	}

	return 0;
}