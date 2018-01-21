#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int sz, int finding)
{
    int left,mid,right,i;
    left=1;
    right=sz;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==finding)
            return mid;
        else if(finding<arr[mid])
            right=mid-1;
        else if(finding>arr[mid])
            left=mid+1;
    }
    return -1;
}


int main()
{
    int i,j,n,m,f;
    int arr[100];

    printf("Enter Array size:");
    scanf("%d",&n);
    printf("Enter all number of the array: ");

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&m);

    f=BinarySearch(arr,n,m);

    if(f == -1)
        printf("number not found");
    else
        printf("%d found in position: %d",m,f);

    return 0;
}

