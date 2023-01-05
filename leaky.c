#include<stdio.h>
int main()
{
    int bcktsize, pkt[25], i, j, iter, rate, line, total=0;
    printf("Enter the bucket size and output rate(both in MB):");
    scanf("%d%d",&bcktsize,&rate);
    printf("Enter the number of input lines\n");
    scanf("%d",&line);
    printf("Enter input packet rate of %d lines\n",line);
    for(i=0;i<line;i++)
        scanf("%d",&pkt[i]);
    printf("Enter the number of iterations\n");
    scanf("%d",&iter);
    for(i=0;i<iter;i++)
    {
        printf("\nIteration %d\n",i+1);
        for(j=0;j<line;j++)
        {
            total+=pkt[j];
            if(total<=bcktsize)
                printf("\nInput from line %d with rate %d is added to the bucket\nCurrent bucket size(Mb) is %d\n",j+1,pkt[j],total);
            else
            {
                total-=pkt[j];
                printf("\nInput from line %d with rate %d is thrown out of bucket\nCurrent bucket size(Mb)is %d\n",j+1,pkt[j],total);
            }
        }
        if(total<=rate)
        {
            printf("packet sent to outputline at rate %d",total);
            total=0;
            printf("current bucket size is %d",total);
        }
        else
        {
            total-=rate;
            printf("\n---------------------------------\n");
            printf("\npacket sent to output line at rate %d \nCurrent bucket size(Mb)is %d\n",rate,total);
            printf("\n---------------------------------\n");
        }
    }
    return 0;
}
