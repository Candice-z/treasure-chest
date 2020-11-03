#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c,d,m;
    scanf("%d%d\n%d%d",&a,&b,&c,&d);
    m=(60*c+d)-(60*a+b);
    printf("%d",m);
    return 0;
}

