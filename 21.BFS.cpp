#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100];
vector<int>out;
int parent[100];

//vector<int>G[100];
void bfs(int src,int n)
{
	queue<int>Q;
	Q.push(src);
	int visited[100]={0},level[100];

	visited[src]=1;
    level[src]=0;
	while(!Q.empty())
	{
		int u=Q.front();
		for(int i=0;i<graph[u].size();i++)
		{
			int v=graph[u][i];
			if(!visited[v])
			{
				level[v]=level[u]+1;
				parent[v]=u;
				visited[v]=1;
				Q.push(v);
			}
		}
		Q.pop();
	}
	for(int i=1;i<=n;i++)
		printf("%d to %d distance %d\n",src,i,level[i]);


}

void print(int d)
{
    out.push_back(d);
    if(parent[d]==d) return;
    else print(parent[d]);
}

int main()
{
    long long int i,j,a,b,n,m,e;
    cout<<"No of Node and edge : ";
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<<"Enter the source node : "; cin>>b;
    bfs(b,n);
    cout<<endl<<"Enter a destination node : "<<endl;
    int d;
    cin>>d;
    print(d);
    reverse(out.begin(),out.end());
    for(i=0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }
}
