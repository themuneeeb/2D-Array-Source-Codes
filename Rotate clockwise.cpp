//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100], rows, col;
//	cout << " Enter the number of rows: " << endl;
//	cin >> rows;
//	cout << " Enter the number of columns: " << endl;
//	cin >> col;
//	cout << " Enter the elements in matrix: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cout << " The matrix is: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << " The matrix after rotation is: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = i + 1; j < col; j++)
//		{
//			int temp = arr[j][i];
//			arr[j][i] = arr[i][j];
//			arr[i][j] = temp;
//		}
//	}
//	
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col/2; j++)
//		{
//			int temp = arr[i][j];
//			arr[i][j] = arr[i][col - j - 1];
//			arr[i][col - j - 1] = temp;
//		}
//		
//	}
//	/*for (int i = 0; i < rows; i++)
//	{
//		for (int j = col-1; j >= 0; j--)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//	cout << "The Matrix after rotation is: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}