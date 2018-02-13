#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,a[100][100],b[100][100],n,m,c[100][100],d;
    cout<<"Enter matrix (n X k) : "; cin>>n>>d;
    cout<<"Enter matrix A["<<n<<"]["<<d<<"]"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=d;j++)
            cin>>a[i][j];
    }
    cout<<"Enter matrix (k X m) : "; cin>>d>>m;
    cout<<"Enter matrix B["<<d<<"]["<<m<<"]"<<endl;
    for(i=1;i<=d;i++)
    {
        for(j=1;j<=m;j++)
            cin>>b[i][j];
    }

    /// Sum of matrix A and B

    cout<<"Sum is : "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    ///Multiplication of matrix A and B

    cout<<"Multiplication is "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            c[i][j]=0;
    }
    for(int k=1;k<=m;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;

    }
    return 0;
}
