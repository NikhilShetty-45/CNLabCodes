#include<stdio.h>
struct node{
unsigned dist[20];
unsigned from[20];
}rt[10];
void main()
{ 
    int costmat[20][20],source,desti;
    int nodes,i,j,k,count=0;
    printf("\n enter the no of nodes: ");
    scanf("%d",&nodes);//enter the nodes
    printf("\n enter the cost matrix:\n ");
    for(i=0;i<nodes;i++)
    for(j=0;j<nodes;j++)
    {
        scanf("%d",&costmat[i][j]);
        costmat[i][i]=0;
        rt[i].dist[j]=costmat[i][j];
        rt[i].from[j]=j;
    }
    for(i=0;i<nodes;i++)
    {
        printf("\n\n for node %d\n",i);
        for(j=0;j<nodes;j++)
        printf("\t\n node %d via %d distance %d",j,rt[i].from[j],rt[i].dist[j]);
    }
    {
        count=0;
        for(i=0;i<nodes;i++)
        for(j=0;j<nodes;j++)
        for(k=0;k<nodes;k++)
        {
            if(rt[i].dist[j]>rt[i].dist[k]+rt[k].dist[j])
            {
                rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                rt[i].from[j]=rt[i].from[k];
                count++;
            }
        }
        printf("\n...After updation,routing table are....");
        for(i=0;i<nodes;i++)
        {
            printf("\n \n for router %d \n",i);
            for(j=0;j<nodes;j++)
            { 
                printf("\t\nnode%d via %d distance %d ",j,rt[i].from[j],rt[i].dist[j]);
            }
        }
        printf("\n\n");
    }
}
