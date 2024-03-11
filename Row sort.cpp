//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int Array[100][100] = { 0 };
//	int row = 0;
//	int column = 0;
//	
//	cin >> row;
//	cin >> column;
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << "Enter Values for (" << i << "," << j << "):\t";
//			cin >> Array[i][j];
//		}
//	}
//
//	cout << "\nMatrix Before Sorting:\n";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//
//	cout << "\nMatrix After Sorting:\n";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			for (int k = 0; k < column - j - 1; k++)
//			{
//				if (Array[i][k] > Array[i][k + 1])
//				{
//					int temp = Array[i][k];
//					Array[i][k] = Array[i][k + 1];
//					Array[i][k + 1] = temp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}