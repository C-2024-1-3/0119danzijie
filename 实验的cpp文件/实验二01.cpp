#include<iostream>
using namespace std;
int main()
{
	cout << "��������ĸ" << endl;
	char letter;
	cin >> letter;
	
	
	if (letter >= 'a' && letter <= 'z')
	{

		char change = static_cast<char>('A' - 'a' + letter);
		cout << "���д��ĸ�ǣ�" << change << endl;

	}

	if (letter >= 'A' && letter <= 'B')
	{
		cout << "��ASCII��Ϊ��" << static_cast<int>(letter);


	}


	return 0;


}