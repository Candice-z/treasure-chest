#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int m,rest,n1,n2,w=0;
	n1=n/2+1;
	m=n/5;
	for(int i=1;i<=m;i++){
		rest=n-5*i;
		n2=rest/2+1;
		w+=n2;
	}
	printf("%d",n1+w);
    return 0;
}

