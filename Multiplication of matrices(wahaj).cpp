//#include<iostream>
//using namespace std;
//int main()
//{
//	int r1 = 0, c1 = 0, r2 = 0, c2 = 0, arr1[10][10], arr2[10][10], arr[10][10];
//	cout << "Enter rows of Matrix 1 :";
//	cin >> r1;
//	cout << "Enter columns of Matrix 1:";
//	cin >> c1;
//	cout << "Enter rows of Matrix 2 :";
//	cin >> r2;
//	cout << "Enter columns of Matrix 2 :";
//	cin >> c2;
//	if (c1 == r2)
//	{
//		cout << "Enter values for matrix 1 :" << endl;
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c1; j++)
//			{
//				cin >> arr1[i][j];
//			}
//		}
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c1; j++)
//			{
//				cout << arr1[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << "Enter values for matrix 2:" << endl;
//		for (int i = 0; i < r2; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				cin >> arr2[i][j];
//			}
//		}
//		for (int i = 0; i < r2; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				cout << arr2[i][j] << " ";
//			}
//			cout << endl;
//		}
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				int sum = 0;
//				for (int k = 0; k < c1; k++)
//				{
//					sum += arr1[i][k] * arr2[k][j];
//
//				}
//				arr[i][j] = sum;
//			}
//
//
//		}
//		cout << "Multiplication of Two Matrix :" << endl;
//		for (int i = 0; i < r1; i++)
//		{
//			for (int j = 0; j < c2; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		cout << "Invalid Size .";
//		return 0;
//	}
//}