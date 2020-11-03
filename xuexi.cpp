#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,num=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i==j){
				num++;
				break;
			}
		}
	} 
	printf("%d",num);
    return 0;
}

