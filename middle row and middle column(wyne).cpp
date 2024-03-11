//#include<iostream>
//using namespace std;
//int main()
//{
//	int Array[100][100] = { 0 };
//	int size = 0;
//	cout << "Enter size:\t";
//	cin >> size;
//	if ((size % 2) != 1)
//	{
//		cout << "wrong";
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				cout << "Enter values (" << i << "," << j << "):\t";
//				cin >> Array[i][j];
//			}
//		}
//
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				cout << Array[i][j] << "  ";
//			}
//			cout << endl;
//		}
//
//		int middlerow = 0;
//		middlerow = size / 2;
//
//		cout << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << Array[middlerow][i] << "  ";
//		}
//
//		int middlecolumn = 0;
//		middlecolumn = size / 2;
//
//		cout << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << Array[i][middlecolumn] << "  ";
//		}
//	}
//}