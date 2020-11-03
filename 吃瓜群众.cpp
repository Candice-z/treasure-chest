#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int weight;
	scanf("%d",&weight);
	if(weight%2==0&&weight>2){
		printf("YES, you can divide the watermelon into two even parts.\n");
	}
	else{
		printf("NO, you can't divide the watermelon into two even parts.\n");
	}
    return 0;
}

