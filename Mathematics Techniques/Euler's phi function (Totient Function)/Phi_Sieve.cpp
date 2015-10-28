/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

int phi[1000006],mark[1000006];

void sievePhi(int n)
{
    for(int i=1; i<=n; i++)
        phi[i]=i;

    phi[1]=1;
    mark[1]=1;

    for(int i=2; i<=n; i+=2)
    {
        if(i!=2)
            mark[i]=1;
        phi[i]=phi[i]/2;
    }

    for(int i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            phi[i]=phi[i]-1;
            for(int j=2*i; j<=n; j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
