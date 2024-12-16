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
	cout << "英文字母个数为" << a << endl;
	cout << "数字字符个数为" << b << endl;
	cout << "空格个数为" << c << endl;
	cout << "其他字符个数为" << d << endl;

}