#include<iostream>
using namespace std;
int main()
{
	cout << "请输入字母" << endl;
	char letter;
	cin >> letter;
	
	
	if (letter >= 'a' && letter <= 'z')
	{

		char change = static_cast<char>('A' - 'a' + letter);
		cout << "其大写字母是：" << change << endl;

	}

	if (letter >= 'A' && letter <= 'B')
	{
		cout << "其ASCII码为：" << static_cast<int>(letter);


	}


	return 0;


}