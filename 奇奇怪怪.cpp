#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int a,n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if(i%2==1){
			a=i;
		}
		else{
			a=-1*i;
		}
		sum=sum+a;	
	}
	printf("%d",sum);
    return 0;
}

