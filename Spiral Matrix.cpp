//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100], r, c;
//	cout << " Enter the rows: " << endl;
//	cin >> r;
//	cout << " Enter the columns: " << endl;
//	cin >> c;
//	cout << "Enter the entries in matrix: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cout << " The matrix is: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	int rowstart = 0;
//	int rowend = r - 1;
//	int columnstart = 0;
//	int columnend = c - 1;
//	while (rowstart <= rowend && columnstart <= columnend)
//	{
//		//rowstart
//		for (int col = columnstart; col <= columnend; col++)
//		{
//			cout << arr[rowstart][col] << " ";
//		}
//		rowstart++;
//		//columnend
//		for (int row = rowstart; row <= rowend; row++)
//		{
//			cout << arr[row][columnend] << " ";
//		}
//		columnend--;
//		//rowend
//		for (int col = columnend; col >= columnstart; col--)
//		{
//			cout << arr[rowend][col] << " ";
//		}
//		rowend--;
//		//columnstart
//		for (int row = rowend; row >= rowstart; row--)
//		{
//			cout << arr[row][columnstart] << " ";
//		}
//		columnstart++;
//	}
//}