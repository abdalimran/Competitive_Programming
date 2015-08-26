/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

//Recursively
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

//Shortly
int gcd(int a, int b)
{
    return b == 0?a:gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);

    //cout<<gcd(8,10)<<endl;

    cout<< __gcd(8,12)<<endl; //This function works only in gnu gcc/g++ compilers.

    return 0;
}
