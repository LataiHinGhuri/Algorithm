#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,f;
    int arr[100];

    cout<<"Enter Array size:";
    cin>>n;
    cout<<"Enter all the number of the array: ";)

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    cout<<"Enter the number to search: ";
    cin>>m;

    for(i=1; i<=n; i++)
    {
        if(arr[i]==m)
        {
            f=i;
            break;
        }
    }

    if(f == -1)
        cout<<"Number not found"<<endl;
    else
        cout<<m<<" fund in position: "<<f<<endl;

    return 0;
}
