#include <iostream>
#include<conio.h>
#include <stdlib.h>

#define SIZE 3

using namespace std;

class matrix {
public : 

void mulMatrix(int **a, int **b, int **c);

void addMatrix(int **a, int **b, int **c);

void mulAddMatrix(int **a, int **b, int **c);

void resultDisplay(int**a, int**b, int**c, int(*result)[SIZE]);
};