#include<stdio.h>

int bit_set(int n,int k)
{

    if((n >> (k)) & 1)
        return 1;
    else
        return 0;


}

int main()
{
    int n,k;

    printf("Enter a number:\n");
    scanf("%d",&n);

    printf("Enter position of bit:\n");
    scanf("%d",&k);

    if(bit_set(n,k))
        printf("%dth bit is SET in %d\n",k,n);
    else
        printf("%dth bit is NOT SET in %d\n",k,n);

}

