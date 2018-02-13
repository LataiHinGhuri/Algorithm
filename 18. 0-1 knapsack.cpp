#include<bits/stdc++.h>
using namespace std;
int w[100],p[100],max_w,n,dp[100][100],profit;

int knapsack(int i,int weight)
{
    if(i>n) return 0;
    int profit1=0,profit2=0;

    if(w[i]+weight<=max_w) profit1=p[i]+knapsack(i+1,weight+w[i]);

    profit2=knapsack(i+1,weight);

    profit=max(profit1,profit2);

    return profit;
}

int main()
{
    int i,j,a,b,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>w[i]>>p[i];
    }
    cin>>max_w;

    m=knapsack(1,0);
    cout<<"Max profit = "<<m<<endl;
    return 0;
}
