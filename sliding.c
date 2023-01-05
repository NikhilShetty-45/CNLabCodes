#include<stdio.h>
#include<stdlib.h>
#define RTT 4
int main()
{
    int window_size,i,f,frames[50];
    printf("enter window size: ");
    scanf("%d",&window_size);
    printf(" \nenter the no of frames to transmit: ");
    scanf("%d",&f);
    printf("\n enter %d frames: ",f);
    for(i=1;i<=f;i++)
    {
        scanf("%d",&frames[i]);
    }
    printf(" \nafter sending %d frames at each stage sender waits for ACK ",window_size);
    for(i=1;i<=f;i++)
    {
        if(i%window_size!=0)
        {
            printf("%d",frames[i]);
        }
        else
        {
            printf("%d\n",frames[i]);
            printf("SENDER:waiting for ACK...\n\n");
            sleep(RTT/2);
            printf("RECEIVER:frames received,ACK sent\n");
            sleep(RTT/2);
            printf("SENDER:ACK received,sending next frames\n");
        }
    } 
    if(f%window_size!=0)
    {
        printf("SENDER:waiting for ACK...\n");
        sleep(RTT/2);
        printf("RECEIVER:frames received,ACK sent\n");
        sleep(RTT/2);
        printf("SENDER:ACK received.");
    }
    return 0;
}
 