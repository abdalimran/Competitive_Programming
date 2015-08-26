/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

vector <int> primes {2,3,5,7,11,13,17,19,23,27,19}; //we'll preload primes once at the beginning. Sieve can be used here for preloading.

int countDivisor (int n)
{
    int divisor = 1;

    for (int i=0; i<primes.size(); i++)
    {
        if (n%primes[i] == 0)
        {
            int cnt=1;
            while (n%primes[i] == 0)
            {
                n/=primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    cout<<countDivisor(n);

    return 0;
}
