#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    double up=0,down=0,height=0,s=0;
    scanf("%lf%lf%lf",&up,&down,&height);
    s=(up+down)*height/2;
    printf("%.3f",s);
    return 0;
}

