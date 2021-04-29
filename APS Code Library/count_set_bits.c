#include<stdio.h>
int count_set_bits(int mask)
{
    int c=0;

    while(mask)
    {
        c+=mask&1;
        mask>>=1;
    }

    return c;
}

int main()
{

    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Number of set bits in %d is %d\n",n,count_set_bits(n));
    return 0;
}
