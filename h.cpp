#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c,d,x,y,z,m;
    printf("Enter four integers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b){
    	x=a;
    	z=b;
	}
	else{
		x=b;
		z=a;
	}
	if(c<d){
		y=c;
		m=d;				
	}
	else{
		y=d;
		m=c;
	}
	if(x<y)
	x=x;
	else x=y;
	if(z<m)
	m=m;
	else m=z;
	printf("Largest: %d\n",m);
	printf("Smallest: %d\n",x);
    return 0;
}

