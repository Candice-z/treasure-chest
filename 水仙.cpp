#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int m,n,j;
		int a,b,c,d;
		int num[900];
		int w=0;
		scanf("%d %d",&m,&n);
		for(j=m;j<=n;j++){
			a=j/100;
			c=j%10;
			d=j%100;
			b=d/10;
			if(j==a*a*a+b*b*b+c*c*c){
				num[w]=j;
				w=w+1;
			}
			else{
				w=w;
			}
		}
		if(num[0]==0){
			printf("-1\n");
		}
		else{
			for(int n=0;n<w;n++){
			printf("%d ",num[n]);
		}
		printf("\n");
		}
	}
    return 0;
}

