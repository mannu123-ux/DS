#include<stdio.h>
int main()
{
    int arr[100],temp,n,m;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int j=0;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        j++;
        arr[j]=temp;
    }
         
         
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}