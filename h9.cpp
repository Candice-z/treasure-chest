#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{ 
    long long int a[52]={0,0,1};
	int i,n;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    	a[i]=a[i-2]+a[i-1];	
		printf("%lld",a[n]);
    return 0;
}

