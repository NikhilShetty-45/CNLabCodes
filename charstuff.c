#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,n;
    printf("Enter the String\n");
    scanf("%s",a);
    n= strlen(a);
    b[0]='f';
    b[1]='l';
    b[2]='a';
    b[3]='g';
    j=4;
    while(i<n)
    {
        if(a[i]=='f'&&a[i+1]=='l'&&a[i+2]=='a'&&a[i+3]=='g')
        {
            b[j]='e';
            b[j+1]='s';
            b[j+2]='c';
            j=j+3;
        }
        else if(a[i]=='e'&&a[i+1]=='s'&&a[i+2]=='c')
        {
            b[j]='e';
            b[j+1]='s';
            b[j+2]='c';
            j=j+3;
        }
        b[j]=a[i];
        i++;
        j++;
    }
    b[j]='f';
    b[j+1]='l';
    b[j+2]='a';
    b[j+3]='g';
    b[j+4]='\n';
    printf("\nAfter char Stuffng\n");
    printf("%s",b);
}
