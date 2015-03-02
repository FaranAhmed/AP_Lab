#include <limits.h>
#include "mycode.h"
#include "gtest/gtest.h"

TEST(AddTest2, Blah) {
	matrix result;
	int** ans;
	
	int **a = new int*[SIZE];
	int **b = new int*[SIZE];
	int **c = new int*[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = new int[SIZE];
		b[i] = new int[SIZE];
		c[i] = new int[SIZE];
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j] = i;
			b[i][j]=j;
			c[i][j]=i+j;		
		}
	}
	ans = result.addMatrix(a, b, c);
	
	EXPECT_EQ(ans[0][0],0);
	EXPECT_EQ(ans[0][1],1);
	EXPECT_EQ(ans[0][2],2);
	EXPECT_EQ(ans[1][0],1);
	EXPECT_EQ(ans[1][1],2);
	EXPECT_EQ(ans[1][2],3);
	EXPECT_EQ(ans[2][0],2);
	EXPECT_EQ(ans[2][1],3);
	EXPECT_EQ(ans[2][2],4);
	
}

TEST(MulTest2, Blah) {
	matrix result;
	int** ans;
	
	int **a = new int*[SIZE];
	int **b = new int*[SIZE];
	int **c = new int*[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = new int[SIZE];
		b[i] = new int[SIZE];
		c[i] = new int[SIZE];
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j] = i;
			b[i][j]=j;
			c[i][j]=i+j;		
		}
	}
	ans = result.mulMatrix(a, b, c);
	
	EXPECT_EQ(ans[0][0],0);
	EXPECT_EQ(ans[0][1],0);
	EXPECT_EQ(ans[0][2],0);
	EXPECT_EQ(ans[1][0],0);
	EXPECT_EQ(ans[1][1],3);
	EXPECT_EQ(ans[1][2],6);
	EXPECT_EQ(ans[2][0],0);
	EXPECT_EQ(ans[2][1],6);
	EXPECT_EQ(ans[2][2],12);
	
}

TEST(MulAddTest2, Blah) {
	matrix result;
	int** ans;
	
	int **a = new int*[SIZE];
	int **b = new int*[SIZE];
	int **c = new int*[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = new int[SIZE];
		b[i] = new int[SIZE];
		c[i] = new int[SIZE];
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j] = i;
			b[i][j]=j;
			c[i][j]=i+j;		
		}
	}
	ans = result.mulAddMatrix(a, b, c);
	
	EXPECT_EQ(ans[0][0],0);
	EXPECT_EQ(ans[0][1],1);
	EXPECT_EQ(ans[0][2],2);
	EXPECT_EQ(ans[1][0],1);
	EXPECT_EQ(ans[1][1],5);
	EXPECT_EQ(ans[1][2],9);
	EXPECT_EQ(ans[2][0],2);
	EXPECT_EQ(ans[2][1],9);
	EXPECT_EQ(ans[2][2],16);
	
}
