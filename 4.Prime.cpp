#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,a[1000],b,n,m;
    bool yes[1000];
    cout<<"Enter the number "; cin>>n;
    for(i=0;i<=n;i+=2) a[i]=0;
    for(i=1;i<=n;i+=2) a[i]=1;
    a[2]=1;
    for(i=3;i<=n;i++)
    {
        if(a[i]==1)
        {
            for(j=i+i;j<=n;j+=i) a[j]=0;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==1) cout<<i<<endl;
    }
    return 0;
}
