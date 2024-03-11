//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100], size;
//	cout << " Enter the size(must be odd)" << endl;
//	cin >> size;
//	cout << " Enter the entries in Matrix: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cout << " The matrix is: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "The middle row is: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i == size / 2)
//			{
//				cout << arr[i][j] << " ";
//			}
//		}
//	}
//	cout << "\n The middle column is: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (j == size / 2)
//			{
//				cout << arr[i][j] << " ";
//			}
//		}
//	}
//}