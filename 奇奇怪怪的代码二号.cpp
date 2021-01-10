#include<iostream>
#include<cstring> 
#include<cmath>
using namespace std;
int su[201],f[201];
bool pan(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
    return 1;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int num=0;
        for(int i=2;i<=n;i++)
            if(pan(i))
                su[++num]=i;        
        memset(f,0,sizeof(f));
        f[0]=1;
        for(int i=1;i<=num;i++)
        {
            for(int j=su[i];j<=200;j++)
                f[j]+=f[j-su[i]];
        }
        cout<<f[n]<<endl;
    }
    return 0;
}

