#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n,sum_1=0,sum=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		sum_1+=i;
		sum+=sum_1;
	}
	printf("%d",sum);
    return 0;
}

