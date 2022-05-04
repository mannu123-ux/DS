#include<stdio.h>
int main()
{
    int arr[100],n,temp,j=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++)
    {
        temp=arr[i];

        for(int j=i-1;j>=0 && temp<arr[j];j--)
        {
                arr[j+1]=arr[j];
        }
        j++;
        arr[j]=temp;
    }

    printf("Shorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}