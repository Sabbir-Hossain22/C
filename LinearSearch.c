#include<stdio.h>
int main()
{
    int a[100],i,s,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array value: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter searching value : ");
    scanf("%d",&s);
    for(i=0; i<n; i++)
    {
        if(a[i]==s)
        {
            printf("%d found at location a[%d]",s,i);
            break;
        }
    }
    if(i==n)
        printf("Value not found");
}
