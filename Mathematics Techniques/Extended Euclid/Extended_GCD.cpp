/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

typedef pair <int,int> pii;

#define x first
#define y second

pii extendedEuclid (int a, int b)
{ // returns x, y | ax + by = gcd(a,b)
    if(b==0)
        return pii(1,0);
    else
    {
        pii d = extendedEuclid(b, a%b);
        return pii(d.y, d.x-d.y * (a/b));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
