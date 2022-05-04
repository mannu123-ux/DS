#include<stdio.h>
int main()
{
    int arr[100],n,sume=0,sumo=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sume += arr[i];
        }
        else if(arr[i]%2!=0)
        {
            sumo += arr[i];
        }
    }

    printf("\n");
    printf("Sum of the even number = %d\n",sume);
    printf("Sum of the odd number = %d",sumo);
    return 0;
}