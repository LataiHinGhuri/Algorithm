#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,n,k,s[100],f[100];
    vector<int>task;
    cout<<"Enter how many task : ";
    cin>>n;
    cout<<"Enter start and finish time :"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"Task "<<i<<"=";
        cin>>s[i]>>f[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(f[i]>f[j])
            {
                swap(f[i],f[j]);
                swap(s[i],s[j]);
            }
        }
    }
    k=1; task.push_back(1);
    for(i=2;i<=n;i++)
    {
        if(s[i]>=f[k])
        {
            task.push_back(i);
            k=i;
        }

    }
    cout<<"Maximum Task I can do : "<<task.size()<<endl;
    cout<<"Task are : "<<endl;
    for(i=0;i<task.size();i++)
    {
        cout<<"Task "<<i+1<<"="<<s[task[i]]<<" "<<f[task[i]]<<endl;
    }
    return 0;
}
