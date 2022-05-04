#include<stdio.h>
int main()
{
    int arr[8],low=0,n,num,flag=0, i=0;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    int high=n-1;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENter the number you want to search\n");
    scanf("%d",&num);

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==num)
        {
            flag=1;
            i=mid;
            break;
        }
        else if(arr[mid]>num)
            high=mid-1;
        else if(arr[mid]<num)
            low=mid+1;
    }
    if(flag==1)
    {
        printf("number found at %d",i);
    }
    else{
        printf("number is not found");
    }
    return 0;
}