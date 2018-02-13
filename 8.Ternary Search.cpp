#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[100],b,n,m,l,r,mid,item;
    cout<<"Enter the number of element : "; cin>>n;
    cout<<"Enter elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the Item to find : "; cin>>item;
    sort(a,a+n);
    l=0; r=n-1;
    while(l<=r)
    {
        int mid1=(l+r)/3;
        int mid2=l+mid1;
        if(a[mid1]==item){
            cout<<"Item found in "<<mid1+1<<" :) :) "<<endl;
            break;
        }
        else if(a[mid2]==item){
            cout<<"Item found in "<<mid2+1<<" :) :) "<<endl;
            break;
        }
        else if(item<a[mid1]){
            r=mid1-1;
        }
        else if(item>a[mid1] and item<a[mid2]){
            l=mid1+1; r=mid2-1;
        }
        else l=mid2+1;
    }
    if(l>r) cout<<"Item not found :( :( "<<endl;
    return 0;
}
