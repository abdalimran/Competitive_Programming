/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

void ConvertBase(int N,int base)
{
     if(N==0)
         return;

     int x = N%base;
     N/=base;
     if (x<0)
         N+=1;
     ConvertBase(N,base);
     cout<<(x<0?x+(base*-1):x);
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
