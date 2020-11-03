#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0){
		if(a>50){
			printf("yes");
		}
		else{
			printf("no");
		}
	} 
	else{
		printf("no");
	}
    return 0;
}

