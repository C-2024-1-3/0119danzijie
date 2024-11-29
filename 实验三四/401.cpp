#include<iostream>
using namespace std;
int main()
{
	int arry1[10];
	int arry2[10];
	int n = 0;
	
	for(int i=0;i<10;i++)
	{
		cin >> arry1[i];
	}
	bool isnew;
	for (int j = 0; j < 10; j++)
	{
		
		 isnew = 1;
		
			for (int m = 0; m < n; m++)
			{
				if (arry1[j]==arry2[m])
				{
					 isnew = 0;
				}

			}
			
			if (isnew)
			{
				arry2[n] = arry1[j];
				n++;
			}
	 
	}
	for (int i = 0; i < n; i++)
	{
		cout << arry2[i] << "\t";
	}
	system("pause");
	return 0;

}