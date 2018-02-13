#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,a,n,m,b;
    string c,s,sum;
    cout<<"Enter two Binary number : "<<endl;
    cout<<"C = "; cin>>c;
    cout<<"S = "; cin>>s;

    i=c.size()-1; j=s.size()-1; n=0;
    while(i>=0 || j>=0)
    {
        if(i>=0) a=c[i]-'0';
        else a=0;
        if(j>=0) b=s[j]-'0';
        else b=0;
        sum+=((a+b+n)%2)+'0';
        n=(a+b+n)/2;
        i--; j--;
    }
    if(n) sum+=n+'0';
    for(i=sum.size()-1;i>=0;i--)
        cout<<sum[i];
    cout<<endl;
    return 0;
}
