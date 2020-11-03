#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main ()
{
	int digit_wr[10] = {0};
	int digit;
	int n;
	
	printf ("Enter a number£º");
	scanf ("%d", &n);
	
	while (n > 0) {
		digit = n % 10;
		digit_wr[digit]++;
		n /= 10;
	} 
	
	printf ("Digit:\t\t");
	for (int i = 0; i < 10; i++) {
		printf ("%3d", i);
	}
	
	printf ("\nOccurrences:\t");
	for (int i = 0; i < 10; i++) {
		printf ("%3d", digit_wr[i]);
	}
 
	printf("\n");
	return 0;
 }


