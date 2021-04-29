#include<stdio.h>

int clearBit(int n, int k)
{
    return (n & (~(1 << (k))));
}

int main()
{
    int n,k;
    printf("Enter a number and the position from right:\n");
    scanf("%d%d",&n,&k);
    n=clearBit(n,k);
    printf("After clearing the bit number is %d",n);
    return 0;
}
