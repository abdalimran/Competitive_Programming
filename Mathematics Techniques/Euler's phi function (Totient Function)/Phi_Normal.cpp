/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

//Normal Algorithm
int phi(int n)
{
    int ret=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;

            ret-=ret/i;
        }
    }
    // this case will happen if n is a prime number
    // in that case we won't find any prime that divides n
    // that's less or equal to sqrt(n)
    if(n>1) ret-=ret/n;

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
