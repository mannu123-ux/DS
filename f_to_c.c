#include<stdio.h>
int main()
{
    float arr[100];
    int n,c,f;

    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the temp in FAHRENHEIT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        c=(arr[i]-32)*(5/9);
        printf("%d\t",c);
    }
}