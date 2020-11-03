#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a%10;
	if(b>=5){
		a=a+10-b;
	} 
	else{
		a=a-b;
	}
	printf("%d",a);
    return 0;
}

