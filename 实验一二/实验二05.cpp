#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0;
	
	char ch;
	while (1)
	{
		cin.get(ch);
		if(ch=='\n')
		{break;}
		else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		{a++;}
		else if (ch >= '0' && ch <= '9')
		{b++;}
		else if(ch==' ')
		{c++;}
		else
		{d++;}
	}
	cout << "Ӣ����ĸ����Ϊ" << a << endl;
	cout << "�����ַ�����Ϊ" << b << endl;
	cout << "�ո����Ϊ" << c << endl;
	cout << "�����ַ�����Ϊ" << d << endl;

}