#include<stdio.h>
int main()
{
    int n,sides;
    scanf("%d",&n);
    sides = n*(n-3)/2;
    printf("%d",sides);
    return 0;
}