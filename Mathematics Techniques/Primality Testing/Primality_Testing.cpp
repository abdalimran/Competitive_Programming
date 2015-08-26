/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

bool isPrime (int n)
{
    if(n<2)
        return false;

    for(long long i=2; i*i<=n; i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);

    if(isPrime(5)==true)
        cout<<"It is a prime number!"<<endl;
    else
        cout<<"It is not a prime number!"<<endl;

    return 0;
}
