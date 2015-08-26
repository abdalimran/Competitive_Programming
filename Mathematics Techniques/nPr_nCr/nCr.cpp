/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

long factorial(int n)
{
      if(n==0)
           return 1;
      else
           return(n*factorial(n-1));
}

long ncr(int n,int r)
{
      long value;
      value=factorial(n)/(factorial(r)*factorial(n-r));
      return value;
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
