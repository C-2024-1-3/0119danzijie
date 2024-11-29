#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int m = 0;
	for (int i = 1; i <= num; i++)
	{
		if(num%i==0)
		{
			m++;
		}
	}
	if(m==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int m = 0;
	for (int j = 2;m<200; j++)
	{
		int result=is_prime(j);
		if(result==1)
		{
			if(m%10==0)
			{
				cout << endl;
			}
			cout <<j<<"\t";
			m++;
		}

	}
	system("pause");
	return 0;


}