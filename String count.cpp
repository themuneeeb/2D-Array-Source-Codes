//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	char arr[4][4];
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	char key[50];
//	int countx = 0;
//	int size = 4;
//	int xi, xj;
//	cout << "Input key  ";
//	cin >> key;
//	int x = strlen(key);
//	int count1 = 0;
//	int flag = 0;
//	for (int i = 0; i < size && flag == 0; i++)
//	{
//		for (int j = 0; j < size && flag == 0; j++)
//		{
//
//			for (int k = 0; k < x; k++)
//			{
//				if (arr[i][k] == key[k])
//				{
//					count1++;
//				}
//				if (count1 == x)
//				{
//					flag = 1;
//					xi = i;
//					xj = j;
//					countx == 1;
//				}
//
//			}
//
//			count1 = 0;
//		}
//	}
//	count1 = 0;
//	for (int i = 0; i < size && flag == 0; i++)
//	{
//		for (int j = 0; j < size && flag == 0; j++)
//		{
//
//			for (int k = 0; k < x; k++)
//			{
//				if (arr[k][j] == key[k])
//				{
//					count1++;
//				}
//				if (count1 == x)
//				{
//					flag = 1;
//					xi = i;
//					xj = j;
//					countx == 0;
//				}
//
//			}
//
//			count1 = 0;
//		}
//	}
//
//	if (flag == 1)
//	{
//		cout << "The word is found at " << xi << "  " << xj;
//	}
//	if (countx == 1)
//	{
//		cout << "Horizontally";
//	}
//	else
//	{
//
//		cout << "Downward";
//	}
//}