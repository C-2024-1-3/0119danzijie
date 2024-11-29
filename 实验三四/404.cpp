#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; i++)
	{
		list3[i] = list2[i - size1];
	}
	for (int i = 1; i <size1+size2; i++)
	{
		for (int j = 0; j < size1+size2- i; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}

	}
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << "\t";
	}
}
int main()
{
	
	cout << "请输入第一组数组（第一个数为元素数）：" << endl;
	int size1;
	cin >> size1;
	int list1[80];
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二组数组（第一个数为元素数）：" << endl;
	int size2;
	cin >> size2;
	int list2[80];
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int list3[160];
	merge(list1, size1, list2, size2, list3);







}