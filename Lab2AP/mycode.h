#include <iostream>
#include <stdlib.h>

#define SIZE 3

using namespace std;

class matrix {
public : 

int** mulMatrix(int **a, int **b, int **c);

int** addMatrix(int **a, int **b, int **c);

int** mulAddMatrix(int **a, int **b, int **c);

void resultDisplay(int**a, int**b, int**c, int**result);
};
