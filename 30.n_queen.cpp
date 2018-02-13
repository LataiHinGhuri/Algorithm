#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b,N;
    cin>>N;
    int s=0;
    for(i=3;i<N;i+=3)
        if(!i%3) s+=i;
    for(i=5;i<N;i+=5)
        if(!i%5 && i%3) s+=i;
    cout<<s<<endl;
}
