//#include<iostream>
//
//using namespace std;
//
//void row_wise(int a[][100], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			for (int k = 0; k < c - j - 1; k++)
//			{
//				if (a[i][k] > a[i][k + 1])
//				{
//					int temp = a[i][k];
//					a[i][k] = a[i][k + 1];
//					a[i][k + 1] = temp;
//				}
//			}
//		}
//	}
//}
//
//void transpose(int a[][100], int r, int c)
//{
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = i + 1; j < r; j++)
//		{
//			int temp = a[j][i];
//			a[j][i] = a[i][j];
//			a[i][j] = temp;
//		}
//	}
//}
//
//void column_wise(int a[][100], int r, int c)
//{
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//			for (int k = 0; k < r - j - 1; k++)
//			{
//				if (a[i][k] > a[i][k + 1])
//				{
//					int temp = a[i][k];
//					a[i][k] = a[i][k + 1];
//					a[i][k + 1] = temp;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int r = 0;
//	int c = 0;
//
//	cout << "Enter rows:\t";
//	cin >> r;
//
//	cout << "Enter columns:\t";
//	cin >> c;
//
//	int Array[100][100] = { 0 };
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter values for (" << i << "," << j << "):\t";
//			cin >> Array[i][j];
//		}
//	}
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//
//	row_wise(Array, r, c);
//	transpose(Array, r, c);
//	column_wise(Array, r, c);
//	transpose(Array, r, c);
//
//	cout << "The column wise sorted matrix is: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}