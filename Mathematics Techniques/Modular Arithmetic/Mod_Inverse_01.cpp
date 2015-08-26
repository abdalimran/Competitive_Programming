/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

//1. Brute Force
int modInverse(int a, int m)
{
    a%=m;
    for(int x=1; x<m; x++)
    {
        if((a*x)%m == 1)
            return x;
    }
}

//Recursive Method Using Extended Euclidean Algorithm
pair<int, pair<int, int> > extendedEuclid(int a, int b)
{
    if(a == 0)
        return make_pair(b, make_pair(0, 1));

    pair<int, pair<int, int>>p;
    p = extendedEuclid(b%a,a);

    return make_pair(p.first, make_pair(p.second.second - p.second.first*(b/a), p.second.first));
}

int modInverse(int a, int m)
{
    return (extendedEuclid(a,m).second.first + m)%m;
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
