//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[100][100],b[100][100], r1, r2, c1, c2;
//	int result[100][100];
//	cout << "Enter the rows of first matrix: " << endl;
//	cin >> r1;
//	cout << " Enter the column of first matrix: " << endl;
//	cin >> c1;
//	cout << "Enter the rows of second matrix: " << endl;
//	cin >> r2;
//	cout << " Enter the column of second matrix: " << endl;
//	cin >> c2;
//	if (c1 == r2)
//	{
//		cout << " ENter the elements in first matrix: " << endl;
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c1; j++)
//			{
//				cin >> a[i][j];
//			}
//		}
//		cout << " Enter the elements in second matrix: " << endl;
//		for (int i = 0; i < r2; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				cin >> b[i][j];
//			}
//		}
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				for (int k = 0; k < c1; k++)
//				{
//					result[i][j] += a[i][k] * b[k][j];
//				}
//			}
//		}
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c1; j++)
//			{
//				cout << a[i][j];
//			}
//			cout << endl;
//		}
//		cout << "	*	";
//		for (int i = 0; i < r2; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				cout << b[i][j];
//			}
//			cout << endl;
//		}
//		cout << "	=	 ";
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				cout << result[i][j];
//			}
//		}
//
//	}
//}