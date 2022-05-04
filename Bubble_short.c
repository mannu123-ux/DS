#include<stdio.h>
int main()
{
    int arr[1000],n,temp;
    printf("Enter the leangth of the array\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n The shorted array is : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
           
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}