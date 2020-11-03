#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std ;
int main ( )
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%7.d\n",a);   
    printf("+%6.d\n",b);
    printf("-------\n");
    printf("%7.d",a+b);
    return 0 ;
}
