#include <stdio.h>

int max(int,int,int);

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a*b*c >= 50 && max(a,b,c) <= 40)
        printf("YES");
    else
        printf("NO");
}

int max(int x, int y, int z)
{
    int max = 0;
    if (x>max) max = x;
    if (y>max) max = y;
    if (z>max) max = z;
    return max;
}