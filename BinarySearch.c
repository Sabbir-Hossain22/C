#include<stdio.h>
int main()
{
    int a[100],i,j,low,mid,high,key,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter searching value : ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<key)
        {
            low=mid+1;

        }
        else if(a[mid]==key)
        {
            printf("%d found at a[%d]",key,mid);
            break;
        }
        else
        {
            high=mid-1;
            mid=(low+high)/2;
        }

    }
    if(low>high)
        printf("value not found.");
}
