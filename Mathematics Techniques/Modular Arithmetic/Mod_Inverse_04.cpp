/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

//4. Using Euler’s Theorem
vector<int> inverseArray(int n, int m)
{
    vector<int> modInverse(n+1,0);
    modInverse[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        modInverse[i] = (-(m/i) * modInverse[m % i]) % m + m;
    }
    return modInverse;
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
