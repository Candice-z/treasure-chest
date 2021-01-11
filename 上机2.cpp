#include<algorithm>
#include<cstdio>
#include<set>
using namespace std;
int main()
{
	int T, n, a[10010];
	scanf("%d", &T);
	while (T--) {
		set<int>s;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)scanf("%d", &a[i]), s.insert(a[i]);
		printf("%d", *s.begin());
		set<int>::iterator it = s.begin();
		it++;
		for (; it != s.end(); it++)printf(" %d", *it);
		printf("\n");
	}
	return 0;
}
