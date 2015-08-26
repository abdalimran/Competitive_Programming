/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

#define M 1000000

bool marked[M];

bool isPrime (int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
        return marked[n] == false;
}

void sieve (int n)
{
    for(int i=2; i<=n; i++)
    {
        if (marked[i] == false)
        {
            cout<<i<<endl;  // i is a prime
            for (int j = i+i; j<=n; j+=i)
                marked[j] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    sieve(n);

    if(isPrime(n)==true)
        cout<<n<<" is a prime number!"<<endl;
    else
        cout<<n<<" is not a prime number!"<<endl;

    return 0;
}
