
#include<stdio.h>
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

    for(i=1; i<=n; i++)
    {
        if(arr[i]==m)
        {
            f=i;
            break;
        }
    }

    if(f == -1)
        printf("number not found");
    else
        printf("%d found in position: %d",m,f);

    return 0;
}
