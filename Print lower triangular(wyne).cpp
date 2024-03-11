//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int Array[100][100] = { 0 };
//	int N = 0;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << "Enter values (" << i << "," << j << "):\t";
//			cin >> Array[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//	cout << endl << endl;
//
//	int k = N;
//	for (int i = 0; i < N; i++, k--)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cout << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}