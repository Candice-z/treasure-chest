#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    double a,c,s,pi=3.14159;
    scanf("%lf",&a);
    c=2*pi*a;
    s=pi*a*a;
    printf("%.6f\n%.6f",c,s);
    return 0;
}

