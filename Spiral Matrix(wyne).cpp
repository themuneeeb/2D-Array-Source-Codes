//#include<iostream>
//using namespace std;
//int main()
//{
//	int Array[100][100] = { 0 };
//	int r;
//	int c;
//
//	cout << "Enter rows and columns:\t";
//	cin >> r >> c;
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
//		cout << "\n";
//	}
//
//	int row_start = 0;
//	int row_end = r - 1;
//	int column_start = 0;
//	int column_end = c - 1;
//
//	cout << endl << endl;
//	cout << "Spiral Order Matrix is:\n\n";
//
//	while (row_start <= row_end && column_start <= column_end)
//	{
//		// for row start
//		for (int col = column_start; col <= column_end; col++)
//		{
//			cout << Array[row_start][col] << "  ";
//		}
//		row_start++;
//
//		// for column end
//		for (int row = row_start; row <= row_end; row++)
//		{
//			cout << Array[row][column_end] << "  ";
//		}
//		column_end--;
//
//		// for row end
//		for (int col = column_end; col >= column_start; col--)
//		{
//			cout << Array[row_end][col] << "  ";
//		}
//		row_end--;
//
//		// for column start
//		for (int row = row_end; row >= row_start; row--)
//		{
//			cout << Array[row][column_start] << "  ";
//		}
//		column_start++;
//
//	}
//
//	return 0;
//}