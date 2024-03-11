//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//const int ROW = 6;
//const int COL = 6;
//
//// Function to check if the given string is present in the 2D grid
//bool findString(char grid[][COL], char* str)
//{
//	// traverse the grid in all four directions
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			// check if the current character matches with the first character of the string
//			if (grid[i][j] == str[0])
//			{
//				// check if the string is present in the right direction
//				if (findStringInDirection(grid, i, j, str, 0, 1))
//					return true;
//
//				// check if the string is present in the down direction
//				if (findStringInDirection(grid, i, j, str, 1, 0))
//					return true;
//
//				// check if the string is present in the left direction
//				if (findStringInDirection(grid, i, j, str, 0, -1))
//					return true;
//
//				// check if the string is present in the up direction
//				if (findStringInDirection(grid, i, j, str, -1, 0))
//					return true;
//			}
//		}
//	}
//
//	// string not found
//	return false;
//}
//
//// Function to check if the given string is present in the given direction
//bool findStringInDirection(char grid[][COL], int i, int j, char* str, int di, int dj)
//{
//	int len = strlen(str);
//
//	for (int k = 1; k < len; k++)
//	{
//		// check if the current character matches with the next character of the string
//		if (grid[i + k * di][j + k * dj] != str[k])
//			return false;
//	}
//
//	// string found
//	return true;
//}
//
//int main()
//{
//	char grid1[ROW][COL] =
//	{
//		{ 'D', 'D', 'D', 'G', 'D', 'D' },
//		{ 'B', 'B', 'D', 'E', 'B', 'S' },
//		{ 'B', 'S', 'K', 'E', 'B', 'K' },
//		{ 'D', 'D', 'D', 'D', 'D', 'E' },
//		{ 'D', 'D', 'D', 'D', 'D', 'E' },
//		{ 'D', 'D', 'D', 'D', 'D', 'G' }
//	};
//
//	char str1[] = "GEEKS";
//
//	if (findString(grid1, str1))
//		cout << "String found in grid1" << endl;
//	else
//		cout << "String not found in grid1" << endl;