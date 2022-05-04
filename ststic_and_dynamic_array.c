/*#include<stdio.h>
#define max 100
void take_input(int arr[],int n)
{
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print_array(int arr[],int n)
{
    printf("Array in reverse order\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int arr[max];
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    take_input(arr,n);
    print_array(arr,n);


}
*/

#include<stdio.h>
#include<stdlib.h>
void take_input(int *p, int n)
{
    printf("Enter the element of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}

void print_array(int *p,int n)
{
    printf("Your entered array in reverse order\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",*(p+i));
    }
}

int main()
{
    int *p=NULL;
    int n;
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    take_input(p,n);
    print_array(p,n);

}