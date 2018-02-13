#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
vector<int>Tgraph[100];
int t,par[100],vis[100];
struct data{
    int i,st,ft;
};
data node[100];
void dfs(int u)
{
    vis[u]++;
    t++;
    node[u].i=u;
    node[u].st=t;
    for(int i=0;i<graph[u].size();i++)
    {
        int v=graph[u][i];
        if(vis[v]==0)
        {
            par[v]=u;
            dfs(v);
        }
    }
    vis[u]++;
    t++;
    node[u].ft=t;
}

void scc(int i,int n)
{
    if(node[i].i!=0){
        int u=node[i].i;
        cout<<node[i].i<<" ";
        node[i].i=0;
        for(int j=0;j<Tgraph[u].size();j++)
        {
            int v=Tgraph[u][j];
            int k;
            for(k=1;k<=n;k++)
            {
                if(node[k].i==v)
                    break;
            }
            scc(k,n);
        }
    }
}

int main()
{
    int n,m,i,j,a,b,u,v;
    while(cin>>n>>m)
    {
        for(i=1;i<=m;i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            Tgraph[v].push_back(u);
        }
        for(i=1;i<=n;i++)
        {
            par[i]=i;
            vis[i]=0;
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
            for(j=1+i;j<=n;j++)
            {
                if(node[i].ft<node[j].ft)
                {
                    data e=node[i];
                    node[i]=node[j];
                    node[j]=e;
                }
            }
        }

        cout<<"Strongly Connected Component "<<endl;
        for(i=1;i<=n;i++)
        {
            if(node[i].i!=0){
                scc(i,n);
                cout<<endl;
            }
        }
    }
    return 0;
}
