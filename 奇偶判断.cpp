#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	scanf("%d",&n);
	m=n%2;
	if(m==0){
		printf("even");
	}
	else{
		printf("odd");
	}
    return 0;
}

