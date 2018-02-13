#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,a,b,n;
    string c;
    cout<<"Enter a decimal number : ";
    cin>>n;

    ///Decimal to Binary Conversion
    b=n;
    while(b)
    {
        c+=(b%2)+'0';
        b=b/2;
    }
    cout<<endl<<n<<" in Binary : ";
    for(i=c.size()-1;i>=0;i--)
        cout<<c[i];
    cout<<endl;
    c.clear();

    ///Decimal to Octal Conversion
    b=n;
    while(b)
    {
        c+=(b%8)+'0';
        b=b/8;
    }
    cout<<n<<" in Octal : ";
    for(i=c.size()-1;i>=0;i--)
        cout<<c[i];
    cout<<endl;
    c.clear();

    ///Decimal to Hexadecimal Conversion

    b=n;
    while(b)
    {
        a=b%16;
        if(a>9)
        {
            a=a-10;
            c+=a+'A';
        }
        else c+=a+'0';
        b=b/16;
    }
    cout<<n<<" in Hexadecimal : ";
    for(i=c.size()-1;i>=0;i--){
        cout<<c[i];
    }
    cout<<endl;

    return 0;
}
