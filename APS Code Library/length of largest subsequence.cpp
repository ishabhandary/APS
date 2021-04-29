#include<iostream>
using namespace std;

int main()
{
    string s1,s2;

    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    int lsb[l1+1][l2+1];

    int i=0,j;
    for(j=0;j<=l2;j++)
    {
        lsb[i][j]=0;

    }

    j=0;

    for(i=1;i<=l1;i++)
    {
        lsb[i][j]=0;
    }

    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                lsb[i][j]=lsb[i-1][j-1]+1;
            }
            else
            {
                lsb[i][j]=max(lsb[i][j-1],lsb[i-1][j]);
            }

        }
    }

    cout<<lsb[l1][l2];
}
