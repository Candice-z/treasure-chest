#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("You entered the date %.4d%.2d%.2d\n",c,a,b);
    return 0;
}

