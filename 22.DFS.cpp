#include<bits/stdc++.h>
using namespace std;

vector<int>edge[100];
int t,vis[100],par[100],st[100],ft[100];

void dfs(int v)
{
    vis[v]++;
    t++;
    st[v]=t;
    for(int i=0;i<edge[v].size();i++)
    {
        int u=edge[v][i];
        if(vis[u]==0)
        {
            par[u]=v;
            dfs(u);
        }
    }
    vis[v]++;
    t++;
    ft[v]=t;
}

int main()
{
    long long int i,j,a,b,n,m,u,v;
    while(cin>>n>>m)
    {
        for(i=1;i<=m;i++)
        {
            cin>>u>>v;
            edge[u].push_back(v);
        }
        for(i=1;i<=n;i++)
        {
            vis[i]=0; par[i]=i;
        }
        t=0;
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i);
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<i<<" = "<<st[i]<<" "<<ft[i]<<endl;
        }
    }
    return 0;
}
