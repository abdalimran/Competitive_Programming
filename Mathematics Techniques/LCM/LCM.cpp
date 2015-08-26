/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

//Normal Algorithm
int lcm(int a, int b)
{
    for (int i=1; ;i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}

//Using GCD formula
int lcm (int a, int b)
{
    return (a/gcd(a,b))*b;
}

//LCM of multiple numbers in an array
int lcm_m(int *num)
{
    int lcm;

    lcm=num[1]*num[2]/gcd(num[1],num[2]);

    for(int i=3;i<=n;i++)   //n=size of the array
        lcm=lcm*num[i]/gcd(lcm,num[i]);

    return lcm;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cout<<lcm(8,12)<<endl;

    return 0;
}
