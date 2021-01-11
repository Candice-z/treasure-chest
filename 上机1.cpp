#include<algorithm>
#include<cstdio>
using namespace std;
const int mod = 1000000;
int main() 
{
	int T,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d", &n);
		if(n>25)n=25;
		int i = 1, sum = 1, k = 2;
		for(int j = 0; j < n - 1; j++){
			i = i * k % mod;
			sum = (sum + i) % mod;
			k++;
		}
		printf("%d\n", sum);
	}
    return 0;
}
