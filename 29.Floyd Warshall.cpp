#include<bits/stdc++.h>
using namespace std;
#define infinite 100
int edge[100][100],par[100][100];
void set_inf(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            edge[i][j]=infinite;
        }
    }
}
int main()
{
    int i,j,k,m,n,e,d,a,b;
    while(cin>>n>>m)
    {
        set_inf(n);
        for(i=1;i<=n;i++) edge[i][i]=0;
        for(i=1;i<=m;i++)
        {
            cin>>a>>b>>e;
            edge[a][b]=e;
        }

        for(k=1;k<=n;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    edge[i][j]=min(edge[i][j],edge[i][k]+edge[k][j]);
                }
            }
        }
        cout<<endl<<"final Matrix "<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(edge[i][j]!=infinite)
                    cout<<edge[i][j]<<" ";
                else cout<<"inf ";
            }
            cout<<endl;
        }
    }
    return 0;
}
