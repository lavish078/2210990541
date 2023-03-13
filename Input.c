#include<stdio.h>

int main()
{
    int n;
    printf("N=");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    int x=(n/2);
    printf("Rev array\n");
    for (int i=0;i<x;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}


