#include <iostream>
#include <string>
using namespace std;
/*
int main(void)
{
	int N = 0;
	string word[20000];
	string temp;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> word[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (word[i].length() < word[j].length())
			{
				temp = word[i];
				word[i] = word[j];
				word[j] = temp;
			}
			else if (word[i].length() == word[j].length())
			{
				for (int k = 0; k < word[i].length(); k++)
				{
					if (word[i].at(k) < word[j].at(k))
					{
						temp = word[i];
						word[i] = word[j];
						word[j] = temp;
					}
					else if (word[i].at(k) > word[j].at(k))
						break;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << word[i] << endl;
	}
	return 0;
}
*/

int main(void)
{
	int N = 0;
	string word[20000];
	string temp;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> word[i];
		for (int j = 0; j < i; j++)
		{
			if (word[i] == word[j])
			{
				i--;
				N--;
				break;
			}
			else
			{
				if (word[i].length() < word[j].length())
				{
					temp = word[i];
					word[i] = word[j];
					word[j] = temp;
				}
				else if (word[i].length() == word[j].length())
				{
					for (int k = 0; k < word[i].length(); k++)
					{
						if (word[i].at(k) < word[j].at(k))
						{
							temp = word[i];
							word[i] = word[j];
							word[j] = temp;
						}
						else if (word[i].at(k) > word[j].at(k))
							break;
					}
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << word[i] << endl;
	}
	cin >> N;
}