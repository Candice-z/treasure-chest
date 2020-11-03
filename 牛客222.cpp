#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int m,n,a,b,c,d;
    scanf("%d",&n);
	a=n/100;
	d=n%100;
	b=d/10;
	c=d%10;
	m=c*100+b*10+a;
	printf("%3.3d",m);
    return 0;
}

