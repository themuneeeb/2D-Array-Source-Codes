//#include <iostream>
//using namespace std;
//void display(int a[][100], int r, int c);
//void sum(int a[][100], int r, int c);
//void rowvisesum(int a[][100], int r, int c);
//void columnvisesum(int a[][100], int r, int c);
//void transpose(int a[][100], int r, int c);
//int main()
//{
//		int a[100][100], row, column;
//		cout << " Enter rows:" << endl;
//		cin >> row;
//		cout << " Enter columns:" << endl;
//		cin >> column;
//		cout << " Enter the elements in 2D Array: " << endl;
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < column; j++)
//			{
//				cin >> a[i][j];
//			}
//		}
//		int choice;
//		cout << "Enter 1 to display the values: " << endl;
//		cout << "Enter 2 to find the sum of:" << endl;
//		cout << "Enter 3 to find row vise sum:" << endl;
//		cout << "Enter 4 to find column vise sum:" << endl;
//		cout << "Enter 5 to find the transpose of matrix: " << endl;
//		cout << "Enter 6 to exit the program: " << endl;
//		cin >> choice;
//		do
//		{
//			if (choice == 1)
//			{
//				display(a, row, column);
//			}
//			else if (choice == 2)
//			{
//				sum(a, row, column);
//			}
//			else if (choice == 3)
//			{
//				rowvisesum(a, row, column);
//			}
//			else if (choice == 4)
//			{
//				columnvisesum(a, row, column);
//			}
//			else if (choice == 5)
//			{
//				transpose(a, row, column);
//			}
//
//			else
//				cout << " Select valid option! " << endl;
//		} while (!6);
//		{
//			return 0;
//		}
//}
//
//void display(int a[][100], int r, int c)
//{
//	cout << "The elements in Array are:" << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << a[i][j];
//		}
//		cout << endl;
//	}
//}
//void sum(int a[][100], int r, int c)
//{
//	int sum = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	cout << " The sum of 2D Array is: " << sum <<endl;
//}
//void rowvisesum(int a[][100], int r, int c)
//{
//	int i, j;
//	for (i = 0; i < r; i++)
//	{
//		int rowvise = 0;
//		for ( j = 0; j < c; j++)
//		{
//			rowvise += a[i][j];
//		}
//		cout << " The sum of row" << i + 1 << " is: " << rowvise << endl;
//	}
//	
//}
//void columnvisesum(int a[][100], int r, int c)
//{
//	int i, j;
//	for ( i = 0; i < c; i++)
//	{
//		int columnvise = 0;
//		for (j = 0; j < r; j++)
//		{
//			columnvise += a[j][i];
//		}
//		cout << " The sum of column" << i +1 << " " << columnvise << endl;
//	}
//
//}
//void transpose(int a[][100], int r, int c)
//{
//	int transpose[100][100]{};
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			transpose[j][i] = a[i][j];
//		}
//	}
//	cout << "The transpose of the matrix is: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << transpose[i][j];
//		}
//		cout << endl;
//	}
//
//}