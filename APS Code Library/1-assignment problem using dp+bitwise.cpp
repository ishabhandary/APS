#include<iostream>
#include<math.h>
#define inf 9999999
#define MAX 10

using namespace std;

int count_set_bits(int mask)
{
    int c=0;

    while(mask)
    {
        c+=mask&1;
        mask=mask>>1;

    }

    return c;

}

int bit_set(int n,int k)
{


    if((n >> (k)) & 1)
        return 1;
    else
        return 0;


}

int assign(int n,int c[MAX][MAX])
{
    int x,y=pow(2,n);
    int dp[y];
    for(int i=0;i<pow(2,n);i++)
        {dp[i]=inf;

        }
    dp[0]=0;

    for(int mask=0;mask<pow(2,n);mask++)
    {
        x=count_set_bits(mask);

        for(int j=0;j<n;j++)
        {   //cout<<mask<<" "<<x<<" "<<j<<" "<<bit_set(mask,j)<<" "<<dp[mask|(1<<j)]<<" "<<dp[mask]+c[x][j]<<"\n";
            if(!bit_set(mask,j))
            {

                dp[mask|(1<<j)]=min(dp[mask|(1<<j)],(dp[mask]+c[x][j]));
            }
        }

    }
    int u=pow(2,n)-1;

return dp[u];
}

int main()
{
    int n;
    cin>>n;
    int c[MAX][MAX];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>c[i][j];

        }
    }
    int s=assign(n,c);
    cout<<s;
}



