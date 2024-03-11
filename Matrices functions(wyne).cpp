//#include<iostream>
//
//using namespace std;
//
//
//void TRANSPOSE(int Array[][100], int r, int c)
//{
//	int temp = r;
//	r = c;
//	c = temp;
//
//	cout << endl << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "  " << Array[j][i] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void COLUMNSUM(int Array[][100], int r, int c)
//{
//	int temp = r;
//	r = c;
//	c = temp;
//
//	cout << endl << endl;
//	for (int i = 0; i < r; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < c; j++)
//		{
//			sum += Array[j][i];
//		}
//		cout << "\nSum Of The Entries of The Column " << i + 1 << " is:\t" << sum;
//	}
//}
//
//void ROWSUM(int Array[][100], int r, int c)
//{
//	cout << endl << endl;
//	for (int i = 0; i < r; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < c; j++)
//		{
//			sum += Array[i][j];
//		}
//		cout << "\nSum Of The Entries of The Row " << i + 1 << " is:\t" << sum;
//	}
//}
//
//void SUM(int Array[][100], int r, int c)
//{
//	int sum = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			sum += Array[i][j];
//		}
//	}
//	cout << "\n\nSum Of The Entries of The Matrix is:\t" << sum;
//}
//
//void DISPLAY(int Array[][100], int r, int c)
//{
//	cout << endl << endl;
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "  " << Array[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void INPUT(int Array[][100], int r, int c)
//{
//	cout << endl;
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter value for (" << i << "," << j << "):\t";
//			cin >> Array[i][j];
//		}
//	}
//}
//
//int main()
//{
//	int A[100][100] = { 0 };
//	int m = 0;
//	int n = 0;
//
//	cout << "Enter number of rows:\t";
//	cin >> m;
//
//	cout << "Enter number of columns:\t";
//	cin >> n;
//
//	INPUT(A, m, n);
//	DISPLAY(A, m, n);
//	SUM(A, m, n);
//	ROWSUM(A, m, n);
//	COLUMNSUM(A, m, n);
//	TRANSPOSE(A, m, n);
//
//	return 0;
//}