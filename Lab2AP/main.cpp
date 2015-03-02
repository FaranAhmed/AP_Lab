#include "mycode.h"

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
			a[i][j] = i;
		}
	}

	for (int i = 0; i<SIZE; i++){		
		for (int j = 0; j<SIZE; j++){
			b[i][j] = j;
		}
	}

	for (int i = 0; i<SIZE; i++){		
		for (int j = 0; j<SIZE; j++){
			c[i][j] = i+j;
		}
	}

	m1.addMatrix(a, b, c);
	m1.mulMatrix(a, b, c);
	m1.mulAddMatrix(a, b, c);
	
	int i;
	cin >> i;
	return 0;
}
