#include<stdio.h>

int main()
{
    int x,y,z,sum=0;
    scanf("%d %d %d",&x,&y,&z);
    sum=1*x+2*y+3*z;
    printf("%d",sum%2);
    return 0;
}