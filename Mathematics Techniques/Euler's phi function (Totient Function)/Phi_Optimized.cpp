/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

//Optimized Algorithm
#define M 1000005

int phi[M];

void Phi()
{
    for(int i=1; i<M; i++)
        phi[i]=i;
    for(int p=2; p<M; p++)
    {
        if(phi[p]==p)
        {
            // cout<<phi[p]<<endl; //p is a prime
            for(int k=p; k<M; k+=p)
                phi[k]-=phi[k]/p;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
