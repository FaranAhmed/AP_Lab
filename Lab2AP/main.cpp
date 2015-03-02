#include "Header.h"
#include "../gtest-1.7.0\fused-src\gtest\gtest.h"

#define SIZE 3

int main()
{
	matrix m1;
	matrix m2;
	int **a = new int*[SIZE];
	int **b = new int*[SIZE];
	int **c = new int*[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = new int[SIZE];
		b[i] = new int[SIZE];
		c[i] = new int[SIZE];
	}

	for (int i = 0; i<SIZE; i++){		
		for (int j = 0; j<SIZE; j++){
			a[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i<SIZE; i++){		
		for (int j = 0; j<SIZE; j++){
			b[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i<SIZE; i++){		
		for (int j = 0; j<SIZE; j++){
			c[i][j] = rand() % 10;
		}
	}

	m1.addMatrix(a, b, c);
	m1.mulMatrix(a, b, c);
	m1.mulAddMatrix(a, b, c);

	getchar();
	return 0;
}
