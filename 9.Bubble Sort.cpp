#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,a[100],b,n,m;
    cout<<"Enter the number of element : "; cin>>n;
    cout<<"Enter elements : ";
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(i=1;i<=n;i++)
         cout<<a[i]<<" "<<endl;
    return 0;
}
