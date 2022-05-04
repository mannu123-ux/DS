#include<stdio.h>
int binarysearch(int arr[],int num,int n)
{

    int flag=0,low=0,high=n-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==num)
        {
            flag=1;
            break;
        }
        else if(arr[mid]>num)
            high=mid-1;
        else if(arr[mid]<num)
            low=mid+1;
    }
    return flag;

}
int main()
{
    int arr[8],n,num;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
     
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENter the number you want to search\n");
    scanf("%d",&num);
    int x=binarysearch(arr,num,n);
    if(x==1)
    {
        printf("number found");
    }
    else{
        printf("number is not found");
    }
    
    
    
    return 0;
}