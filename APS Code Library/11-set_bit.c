#include<stdio.h>
int setBit(int n, int k)
{
    return (n | (1 << (k)));
}


int main()
{
    int n,k;
    printf("Enter a number and the position from right:\n");
    scanf("%d%d",&n,&k);
    n=setBit(n,k);
    printf("After setting bit number is %d",n);
    return 0;
}
