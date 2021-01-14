#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
#include<queue>
#include<algorithm>
using namespace std;

typedef long long ll;
const int N = 1e6+5;
const int mod = 1e6+3;
const int inf = 0x3f3f3f3f;

string s[11]={
"####.##.##.####",
"..#..#..#..#..#",
"###..#####..###",
"###..####..####",
"#.##.####..#..#",
"####..###..####",
"####..####.####",
"####.##.#..#..#",
"####.#####.####",
"####.####..####",
"....#.###.#....",
};

int main()
{
    int _;
    cin>>_;
    while(_--){
       string a[5];
       for(int i=0;i<5;i++) cin>>a[i];
       int len = a[0].size();
       int ans = 0,num = 0;
       for(int i=0;i<len;i+=4){
          string ss="";
          for(int j=0;j<5;j++){
             ss+=a[j][i];
             ss+=a[j][i+1];
             ss+=a[j][i+2];
          }
          int k;
          for(k=0;k<11;k++){
                if(ss == s[k]){
                    //cout<<s[k]<<endl;
                    break;
                }
          }
          if(k == 10)
            ans+=num,num = 0;
          else num = num*10+k;
          //cout<<num<<endl;
        }
        ans+=num;
        string ans1= "";
        //cout<<ans<<endl;
        while(ans){
            int t=ans%10;
            ans1+=(t+'0');
            ans/=10;
        }
        string r[5]={""};
        int cnt = 0;
        string m = ".";
        for(int i=ans1.size()-1;i>=0;i--){
            int t = ans1[i]-'0';
            cnt = 0;
            for(int ii=0;ii<15;ii+=3){//整行的数字转化为方块的数字，就是把数字的每一行添加到答案的每一行的后面，不同数字中间要有.隔开
                r[cnt]+= s[t][ii];
                r[cnt]+=s[t][ii+1];
                r[cnt]+=s[t][ii+2]+m;
                cnt++;
                //cout<<cnt<<endl;
            }
        }

        for(int i=0;i<5;i++){
            int t = r[i].size();
            for(int j=0;j<t-1;j++)//最后一个字符是.，不能输出
                cout<<r[i][j];
            if(i<5) cout<<endl;
        }
        if(_) cout<<endl;
    }
    return 0;
}
