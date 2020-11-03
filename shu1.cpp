#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void s(double a,double b,double c)
{
   printf("%f",(a+b)*c/2);
}
int main()
{
    double up,down,height;
    scanf("%lf%lf%lf",&up,&down,&height);
    s(up,down,height);
    return 0;
}
