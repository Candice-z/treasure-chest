#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c;
    double d;
    scanf("%d%d",&a,&b);
    c=a/b;
    d=a%b;
    d=d/b;
    printf("%.3f",c+d);
    return 0;
}

