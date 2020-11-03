#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int i,n;
	double a,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1.0/i;
		sum=sum+a;
	}
	printf("%.6f",sum);
    return 0;
}

