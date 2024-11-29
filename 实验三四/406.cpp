#include<iostream>
using namespace std;

void count(char s[], int counts[])
{
	char m[] = "abcdefghijklmnopqrstuvwxyz";
	int slen = strlen(s);
	for (int i = 0; i < slen; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = static_cast<char>('a' - 'A' + s[i]);

		}
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == m[j])
			{
				counts[j]++;
			}


		}
	}
	for (int i = 0; i < 26; i++)
	{
		if(counts[i]!=0)
		{
			cout << m[i] << ":" << counts[i] << endl;
		}

	}

}
int main()
{
	int counts[26] = {};
	char s[100];
	cout << "Enter a string:";
	cin >> s;
	count(s, counts);
	system("pause");
	return 0;
}