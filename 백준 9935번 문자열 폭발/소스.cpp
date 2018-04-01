#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word, bomb;
	char result[1000001];
	cin >> word >> bomb;
	int index = 0;
	for (int i = 0; i<word.size(); i++)
	{
		result[index++] = word[i];
		int tmp = (int)bomb.size();
		if (word[i] == bomb[--tmp])
		{
			int a = i - 1;
			int b = tmp - 2;
			bool check = false;
			int size = index - (int)bomb.length();
			while(1)
			{
				if (result[a] != bomb[b])
					break;
			}
			if (check) index -= bomb.size();
		}
	}

	if (index == 0)
		cout << "FRULA" << endl;
	else
	{
		for (int i = 0; i<index; i++)
			cout << result[i];
		cout << endl;
	}
	
	return 0;
}