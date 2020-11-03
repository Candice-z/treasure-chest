#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
using namespace std;
int main()
{
	float a;
	int b,c; 
	scanf("%f",&a) ;
	b=floor(a);
	c=ceil(a);
	printf("%d\n%d",b,c);
    return 0;
}

