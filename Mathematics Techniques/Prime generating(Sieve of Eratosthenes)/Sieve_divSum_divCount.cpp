/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>

using namespace std;

#define MAX 500010

int markPrimes[MAX];
int sumOfDivs[MAX];
int noOfDivs[MAX];

vector<int>primes;

void seivePrime(int n)   //Complexity sqrt(n)
{
    int lim = sqrt(n);

    for(int i=2; i<=lim; i++)
    {
        if(markPrimes[i]==0)
        {
            primes.push_back(i); //i is a prime number
            for(int j=i*i; j<=n; j+=i)
                markPrimes[j]=1; //marking i's multiples
        }
    }
}

void divSum(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
            sumOfDivs[j]+=i;
    }
}

void divCount(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
            noOfDivs[j]++;
    }
}

int main()
{
    int n=8;

    Divisors(n);

    for(int i=0; i<=n; i++)
        cout<<divisors[i]<<" ";

    cout<<"\n"<<divisors[n]<<endl;

    return 0;
}

