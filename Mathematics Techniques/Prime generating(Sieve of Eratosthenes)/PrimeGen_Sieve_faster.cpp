/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

bitset<10000010>bs;
vector<int>primes; //Stores tall the primes to n

long long size;

void sieve(long long n)
{
    size=n;
    bs.set();
    bs[0]=bs[1]=0;

    for(long long i=2; i<=size; i++) if(bs[i])
    {
        for(long long j=i*i; j<=size; j+=i)
            bs[j] = 0;
        primes.push_back((int)i);  //Pushing the primes to the vector
    }
}


bool isPrime(long long n)
{
    if(n<=size)
        return bs[n];

    for (int i=0; i<primes.size(); i++)
        if(n%primes[i]==0)
            return false;

    return true;
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
