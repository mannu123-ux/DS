#include<stdio.h>
int main()
{
    int arr[100],temp,n,value,pos;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        pos=i;
        value=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(value>arr[j])
            {
                value=arr[j];
                pos=j;
            }
        }
        if(pos!=i)
        {
            arr[pos]=arr[i];
            arr[i]=value;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}