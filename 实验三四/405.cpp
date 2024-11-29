#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	bool result = 0;
	int j = 0;

	for (int i = 0; i <= len2 - len1; i++)//少了等于号
	{
		
		if (s2[i] == s1[0])
		{
			result = 1;//一开始未考虑没有一个相同的情况
			j = i;
			for (int m = i; m < i + len1; m++)//len1写成len2
			{
				if (s2[m] != s1[m - i])
				{
					result = 0;
					break;
				}
			}
		}
	}

	if (result)
	{
		return j;
	}
	else
	{
		return -1;
	}



	
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2; 
	int judge = indexOf(s1, s2);
	if (judge == -1)
	{
		cout << judge << endl;
	}
	else
	{
		cout << judge + 1;
	}


	system("pause");
	return 0;
}