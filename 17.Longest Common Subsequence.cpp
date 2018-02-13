#include<bits/stdc++.h>
using namespace std;
string c,s;
int a,b,cnt,dp[100][100];

int lcs(int i,int j)
{
    if(i>=c.size()|| j>=s.size())
        return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(c[i]==s[j])
    {
        cnt=1+lcs(i+1,j+1);
    }
    else{
        cnt=max(lcs(i+1,j),lcs(i,j+1));
    }
    dp[i][j]=cnt;
    return dp[i][j];
}

string ss;
void print_lcs(int i,int j)
{
    if(i>=c.size()|| j>=s.size())
    {
        cout<<ss<<endl;
        return ;
    }
    if(c[i]==s[j])
    {
        ss+=c[i];
        print_lcs(i+1,j+1);
    }
    else{
        if(dp[i+1][j]>dp[i][j+1]) print_lcs(i+1,j);
        else print_lcs(i,j+1);
    }
    return ;
}

int main()
{
    long long int i,j,a,b,n,m;
    cin>>c>>s;
    memset(dp,-1,sizeof(dp));
    n=lcs(0,0);
    cout<<n<<endl;
    print_lcs(0,0);
}
