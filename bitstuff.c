#include<stdio.h>
int main()
{
    int i,n,count=0, a[100];
    printf("Enter the no of bits:\n");
    scanf("%d",&n);
    printf("Enter the bits\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After bit stuffing\n");
    printf("01111110");
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
        printf("%d",a[i]);
        if(count==5)
        {
            printf("0");
            count=0;
        }
    }
    printf("01111110\n");
    return 0;
}
