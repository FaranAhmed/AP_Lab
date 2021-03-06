#include "Header.h"

void matrix::mulMatrix(int **a, int **b, int **c)
{
	cout << "MATRIX MULTICATION\n";
	cout << "==================";

	int result[SIZE][SIZE];
	
	for (int i = 0; i<SIZE; i++)
	{
		for (int j = 0; j<SIZE; j++)
		{
			result[i][j] = 0;
			for (int k = 0; k<SIZE; k++)
			{
				result[i][j] = result[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	cout << "\n";

	resultDisplay(a, b, c, result);
	cout << "\n\n";
}

void matrix::addMatrix(int **a, int **b, int **c)
{
	cout << "MATRIX ADDITION\n";
	cout << "===============";
	int result[SIZE][SIZE];

	for ( int i = 0; i<SIZE; i++)
      for (int j = 0; j<SIZE; j++)
         result[i][j] = a[i][j] + b[i][j];

	cout << "\n";

	resultDisplay(a, b, c, result);	
}

void matrix::mulAddMatrix(int **a, int **b, int **c)
{
	cout << "MATRIX ADDITION AFTER MULTICATION\n";
	cout << "=================================";

	int result[SIZE][SIZE];
	
	for (int i = 0; i<SIZE; i++)
	{
		for (int j = 0; j<SIZE; j++)
		{
			result[i][j] = 0;
			for (int k = 0; k<SIZE; k++)
			{
				result[i][j] = result[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	for ( int i = 0; i<SIZE; i++)
      for (int j = 0; j<SIZE; j++)
         result[i][j] = result[i][j] + c[i][j];

	cout << "\n";

	resultDisplay(a, b, c, result);
	cout << "\n\n";
}

void matrix::resultDisplay(int**a, int**b, int**c, int(*result)[SIZE])
{
	cout << "Matrix A :\n";

	for (int i = 0; i<SIZE; i++){
		for (int j = 0; j<SIZE; j++)
		{
			cout << "  " << a[i][j];
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "\nMatrix B :\n";

	for (int i = 0; i<SIZE; i++)
	{
		for (int j = 0; j<SIZE; j++)
		{
			cout << "  " << b[i][j];
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "\nMatrix C :\n";

	for (int i = 0; i<SIZE; i++)
	{
		for (int j = 0; j<SIZE; j++)
		{
			cout << "  " << c[i][j];
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "\nRESULT:\n";

	for (int i = 0; i<SIZE; i++)
	{
		for (int j = 0; j<SIZE; j++)
		{
			cout << "  " << result[i][j];
		}
		cout << "\n\n";
	}
}