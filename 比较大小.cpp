#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int X,Y,A;
	scanf("%d%d",&X,&Y);
	if(X<Y){
		A=X;
		X=Y;
		Y=A;
		printf("%d\n%d",X,Y);
	} 
	else{
		printf("%d\n%d",X,Y);
	}
    return 0;
}

