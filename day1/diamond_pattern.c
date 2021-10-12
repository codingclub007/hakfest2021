#include<stdio.h>
int main()
{
    int r;
    printf("\nEnter the upper number of rows for diamond pattern:");
    scanf("%d", &r);
    for(int i=1;i<=(2*r)-1;i+=2)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    r-=1;
    for(int i=(2*r)-1;i>=1;i-=2)
    {
        for(int j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}