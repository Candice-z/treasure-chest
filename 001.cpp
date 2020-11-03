#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define N 5
int main(void)
{
	int a[N][N] = {0};
	int i, j;
	for (i = 0; i < N; i++) {
		printf("Enter row %d:  ", i + 1);
		for (j = 0; j < N; j++) {
			scanf("%d", &a[i][j]);
		} 
	}
	int sum;
	printf("Row totals:  ");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			sum += a[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}
	printf("\nColumn totals:  ");
	for (j = 0; j < N; j++) {
		for (i = 0; i < N; i++) {
			sum += a[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}
	return 0;
}

